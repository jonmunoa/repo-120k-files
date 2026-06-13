// fichero 7129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7129;

Registro7129 crear_registro7129(int id) {
    Registro7129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7129(Registro7129 r) {
    return r.valor + r.id;
}
