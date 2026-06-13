// fichero 7873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7873;

Registro7873 crear_registro7873(int id) {
    Registro7873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7873(Registro7873 r) {
    return r.valor + r.id;
}
