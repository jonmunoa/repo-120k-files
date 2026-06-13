// fichero 37301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37301;

Registro37301 crear_registro37301(int id) {
    Registro37301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37301(Registro37301 r) {
    return r.valor + r.id;
}
