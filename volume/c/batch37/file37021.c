// fichero 37021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37021;

Registro37021 crear_registro37021(int id) {
    Registro37021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37021(Registro37021 r) {
    return r.valor + r.id;
}
