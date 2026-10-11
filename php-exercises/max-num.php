<?php
function findMax($numbers) {
    if (empty($numbers)) {
        return null;
    }
    
    $maxNum = $numbers[0];
    foreach ($numbers as $num) {
        if ($num > $maxNum) {
            $maxNum = $num;
        }
    }
    return $maxNum;
}

echo findMax([3, 41, 56, 9, 4, 12]);
?>