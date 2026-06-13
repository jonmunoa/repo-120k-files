// fichero 36465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36465;

Registro36465 crear_registro36465(int id) {
    Registro36465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36465(Registro36465 r) {
    return r.valor + r.id;
}
