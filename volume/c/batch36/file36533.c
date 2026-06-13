// fichero 36533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36533;

Registro36533 crear_registro36533(int id) {
    Registro36533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36533(Registro36533 r) {
    return r.valor + r.id;
}
