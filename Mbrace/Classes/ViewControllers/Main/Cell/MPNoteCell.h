//
//  MPNoteCell.h
//  MbraceChallenge
//
//  Created by Dom-Mac on 11.04.2014.
//
//

#import <UIKit/UIKit.h>

@interface MPNoteCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UITextView *noteTextView;
@property (weak, nonatomic) IBOutlet UILabel *noteId;
@end
