puts ARGV.select { |x| x.match(/^-?[0-9]+$/) }.map(&:to_i).sort.reverse
