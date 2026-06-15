// fichero 27421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27421;

Registro27421 crear_registro27421(int id) {
    Registro27421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
