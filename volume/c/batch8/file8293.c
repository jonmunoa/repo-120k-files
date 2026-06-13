// fichero 8293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8293;

Registro8293 crear_registro8293(int id) {
    Registro8293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8293(Registro8293 r) {
    return r.valor + r.id;
}
