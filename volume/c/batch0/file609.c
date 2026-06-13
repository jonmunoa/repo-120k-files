// fichero 609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro609;

Registro609 crear_registro609(int id) {
    Registro609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro609(Registro609 r) {
    return r.valor + r.id;
}
