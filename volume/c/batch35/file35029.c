// fichero 35029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35029;

Registro35029 crear_registro35029(int id) {
    Registro35029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35029(Registro35029 r) {
    return r.valor + r.id;
}
