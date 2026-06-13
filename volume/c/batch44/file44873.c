// fichero 44873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44873;

Registro44873 crear_registro44873(int id) {
    Registro44873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44873(Registro44873 r) {
    return r.valor + r.id;
}
