// fichero 53425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53425;

Registro53425 crear_registro53425(int id) {
    Registro53425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53425(Registro53425 r) {
    return r.valor + r.id;
}
