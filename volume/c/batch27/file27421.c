// fichero 27421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27421;

Registro27421 crear_registro27421(int id) {
    Registro27421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27421(Registro27421 r) {
    return r.valor + r.id;
}
