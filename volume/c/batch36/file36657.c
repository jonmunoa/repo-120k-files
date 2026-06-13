// fichero 36657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36657;

Registro36657 crear_registro36657(int id) {
    Registro36657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36657(Registro36657 r) {
    return r.valor + r.id;
}
