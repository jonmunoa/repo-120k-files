// fichero 46789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46789;

Registro46789 crear_registro46789(int id) {
    Registro46789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46789(Registro46789 r) {
    return r.valor + r.id;
}
