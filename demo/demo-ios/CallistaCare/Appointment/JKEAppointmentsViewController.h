//
//  JKEAppointmentsViewController.h
//  CallistaCare
//
//  Created by Joakim Kemeny on 2014-01-14.
//  Copyright (c) 2014 Joakim Kemeny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JKEAppointmentsViewController : UITableViewController<NSFetchedResultsControllerDelegate>

    @property(strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
    @property(strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
