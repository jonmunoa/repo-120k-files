// fichero 54873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54873;

Registro54873 crear_registro54873(int id) {
    Registro54873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54873(Registro54873 r) {
    return r.valor + r.id;
}
