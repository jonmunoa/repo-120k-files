// fichero 4109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4109;

Registro4109 crear_registro4109(int id) {
    Registro4109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4109(Registro4109 r) {
    return r.valor + r.id;
}
