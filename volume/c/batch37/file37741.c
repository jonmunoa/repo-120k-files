// fichero 37741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37741;

Registro37741 crear_registro37741(int id) {
    Registro37741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37741(Registro37741 r) {
    return r.valor + r.id;
}
