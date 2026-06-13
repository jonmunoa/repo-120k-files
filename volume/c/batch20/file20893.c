// fichero 20893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20893;

Registro20893 crear_registro20893(int id) {
    Registro20893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20893(Registro20893 r) {
    return r.valor + r.id;
}
