// fichero 5045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5045;

Registro5045 crear_registro5045(int id) {
    Registro5045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5045(Registro5045 r) {
    return r.valor + r.id;
}
