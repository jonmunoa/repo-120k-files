// fichero 1129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1129;

Registro1129 crear_registro1129(int id) {
    Registro1129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1129(Registro1129 r) {
    return r.valor + r.id;
}
