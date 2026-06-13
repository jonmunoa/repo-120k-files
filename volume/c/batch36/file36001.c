// fichero 36001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36001;

Registro36001 crear_registro36001(int id) {
    Registro36001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36001(Registro36001 r) {
    return r.valor + r.id;
}
