import tensorflow as tf
rank1_ts = tf.Variable([1,2,3], tf.int16)
print(rank1_ts.shape)
print(tf.rank(rank1_ts))