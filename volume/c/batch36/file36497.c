// fichero 36497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36497;

Registro36497 crear_registro36497(int id) {
    Registro36497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36497(Registro36497 r) {
    return r.valor + r.id;
}
