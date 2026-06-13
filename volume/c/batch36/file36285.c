// fichero 36285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36285;

Registro36285 crear_registro36285(int id) {
    Registro36285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36285(Registro36285 r) {
    return r.valor + r.id;
}
