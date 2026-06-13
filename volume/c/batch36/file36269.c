// fichero 36269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36269;

Registro36269 crear_registro36269(int id) {
    Registro36269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36269(Registro36269 r) {
    return r.valor + r.id;
}
