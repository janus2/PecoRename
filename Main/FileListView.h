/*
 * Copyrights (c):
 *		2000 - 2008, Werner Freytag.
 *		2009, Haiku
 *		2016, Markus Himmel, Hannah
 *		2017 - 2018, Janus, Humdinger
 * Distributed under the terms of the MIT License.
 *
 * Original author:
 * 		Werner Freytag <freytag@gmx.de>
 */
#ifndef FILE_LIST_VIEW_H
#define FILE_LIST_VIEW_H

#include <ColumnListView.h>

class FileListItem;

class FileListView : public BColumnListView {
public:
					FileListView();
					~FileListView();

	virtual void	MouseDown(BPoint where);
	virtual	void	KeyDown(const char* bytes, int32 numBytes);
	virtual bool	InitiateDrag(BPoint pt, bool initialySelected);

	FileListItem*	ItemAt(int32 index) const;
			void	Select(int32 index);
			void	InvalidateItem(int32 index);
			void	AddItem(FileListItem* item);
			void	AddList(BList* list);
			void	RemoveItem(FileListItem* item);
			void	MessageDropped(BMessage* message, BPoint point);
};

#endif // FILE_LIST_VIEW_H
