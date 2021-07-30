export const GREET: GREETInstance = require('../../build/Release/dijkstra');

interface GREETInstance {
  greet(key: string): string;
}
