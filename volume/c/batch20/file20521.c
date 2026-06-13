// fichero 20521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20521;

Registro20521 crear_registro20521(int id) {
    Registro20521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20521(Registro20521 r) {
    return r.valor + r.id;
}
