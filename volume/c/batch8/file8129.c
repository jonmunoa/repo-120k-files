// fichero 8129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8129;

Registro8129 crear_registro8129(int id) {
    Registro8129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8129(Registro8129 r) {
    return r.valor + r.id;
}
