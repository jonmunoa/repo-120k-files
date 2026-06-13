// fichero 38157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38157;

Registro38157 crear_registro38157(int id) {
    Registro38157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38157(Registro38157 r) {
    return r.valor + r.id;
}
