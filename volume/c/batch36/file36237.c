// fichero 36237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36237;

Registro36237 crear_registro36237(int id) {
    Registro36237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36237(Registro36237 r) {
    return r.valor + r.id;
}
