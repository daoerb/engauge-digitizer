#ifndef SEGMENT_H
#define SEGMENT_H

#include <QGraphicsPathItem>

class DocumentModelSegments;

/// Selectable piecewise-defined line that follows a filtered line in the image. Clicking on a
/// Segment results in the immediate creation of multiple Points along that Segment.
class Segment : public QObject, public QGraphicsPathItem
{
  Q_OBJECT;

public:
  /// Single constructor.
  Segment();

  /// Set the segment properties.
  void setDocumentModelSegments (const DocumentModelSegments &modelSegments);

private:
};

#endif // SEGMENT_H