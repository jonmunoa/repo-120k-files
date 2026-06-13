// fichero 37205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37205;

Registro37205 crear_registro37205(int id) {
    Registro37205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37205(Registro37205 r) {
    return r.valor + r.id;
}
