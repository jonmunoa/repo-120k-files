// fichero 37325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37325;

Registro37325 crear_registro37325(int id) {
    Registro37325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37325(Registro37325 r) {
    return r.valor + r.id;
}
