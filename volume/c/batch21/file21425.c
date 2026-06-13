// fichero 21425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21425;

Registro21425 crear_registro21425(int id) {
    Registro21425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21425(Registro21425 r) {
    return r.valor + r.id;
}
