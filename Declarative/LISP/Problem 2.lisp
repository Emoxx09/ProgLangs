(setf x (make-array '(7)' :element-type 'number :initial-contents '(1 2 5 10 12 15 99)))

(setq sum 0)

(loop for i from 0 to (- (array-total-size x) 1)
    do(setq sum (+ sum (aref x i)))
)

(format t "~d" (/ sum (array-total-size x)))