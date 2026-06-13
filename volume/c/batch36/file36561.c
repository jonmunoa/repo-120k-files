// fichero 36561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36561;

Registro36561 crear_registro36561(int id) {
    Registro36561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36561(Registro36561 r) {
    return r.valor + r.id;
}
