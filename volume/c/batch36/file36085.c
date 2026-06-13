// fichero 36085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36085;

Registro36085 crear_registro36085(int id) {
    Registro36085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36085(Registro36085 r) {
    return r.valor + r.id;
}
