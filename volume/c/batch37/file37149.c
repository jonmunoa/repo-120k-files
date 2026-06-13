// fichero 37149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37149;

Registro37149 crear_registro37149(int id) {
    Registro37149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37149(Registro37149 r) {
    return r.valor + r.id;
}
