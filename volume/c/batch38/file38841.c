// fichero 38841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38841;

Registro38841 crear_registro38841(int id) {
    Registro38841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38841(Registro38841 r) {
    return r.valor + r.id;
}
