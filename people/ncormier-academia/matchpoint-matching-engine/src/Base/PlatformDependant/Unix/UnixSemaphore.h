/******************************************************************************
 ******************************************************************************
 * Copyright (c) 2007 MatchPoint, All rights reserved
 *
 * File    :    UnixSemaphore.h
 * Desc    :    Semaphore declaration for unix
 * Author  :    nico
 *****************************************************************************/

#ifndef __UNIX_SEMAPHORE_H__
# define __UNIX_SEMAPHORE_H__

/*****************************************************************************/
/* Header files                                                              */
/*****************************************************************************/
# include <semaphore.h>
# include "Semaphore.h"
/*****************************************************************************/
/* Default namespace                                                         */
/*****************************************************************************/
# include "DefaultNamespace.h"
DNSPACE_OPEN
/*****************************************************************************/
/* Types Definition                                                          */
/*****************************************************************************/
class UnixSemaphore : public Semaphore
{
  /***************************************************************************/
  /* Methods                                                                 */
  /***************************************************************************/
public:
                    UnixSemaphore(void);
  virtual          ~UnixSemaphore(void);
  bool              TryDecrease(void);
  void              Decrease(void);
  void              Increase(unsigned count = 1);
  /***************************************************************************/
  /* Properties                                                              */
  /***************************************************************************/
private:
  sem_t*   m_sem;
  sem_t    m_dummy;
};
/*****************************************************************************/
/* Default namespace close                                                   */
/*****************************************************************************/
DNSPACE_CLOSE

#endif /* __UNIX_SEMAPHORE_H__ */