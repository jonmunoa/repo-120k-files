// fichero 20425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20425;

Registro20425 crear_registro20425(int id) {
    Registro20425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20425(Registro20425 r) {
    return r.valor + r.id;
}
