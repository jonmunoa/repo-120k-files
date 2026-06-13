// fichero 52293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52293;

Registro52293 crear_registro52293(int id) {
    Registro52293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52293(Registro52293 r) {
    return r.valor + r.id;
}
