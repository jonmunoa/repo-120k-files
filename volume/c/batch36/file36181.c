// fichero 36181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36181;

Registro36181 crear_registro36181(int id) {
    Registro36181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36181(Registro36181 r) {
    return r.valor + r.id;
}
