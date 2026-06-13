// fichero 47873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47873;

Registro47873 crear_registro47873(int id) {
    Registro47873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47873(Registro47873 r) {
    return r.valor + r.id;
}
