// fichero 49873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49873;

Registro49873 crear_registro49873(int id) {
    Registro49873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49873(Registro49873 r) {
    return r.valor + r.id;
}
