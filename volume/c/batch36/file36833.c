// fichero 36833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36833;

Registro36833 crear_registro36833(int id) {
    Registro36833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36833(Registro36833 r) {
    return r.valor + r.id;
}
