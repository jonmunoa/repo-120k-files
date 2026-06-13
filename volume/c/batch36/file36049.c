// fichero 36049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36049;

Registro36049 crear_registro36049(int id) {
    Registro36049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36049(Registro36049 r) {
    return r.valor + r.id;
}
