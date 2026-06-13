// fichero 45425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45425;

Registro45425 crear_registro45425(int id) {
    Registro45425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45425(Registro45425 r) {
    return r.valor + r.id;
}
