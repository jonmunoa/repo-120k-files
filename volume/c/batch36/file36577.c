// fichero 36577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36577;

Registro36577 crear_registro36577(int id) {
    Registro36577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36577(Registro36577 r) {
    return r.valor + r.id;
}
