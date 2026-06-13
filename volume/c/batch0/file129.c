// fichero 129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro129;

Registro129 crear_registro129(int id) {
    Registro129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro129(Registro129 r) {
    return r.valor + r.id;
}
