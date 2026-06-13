// fichero 14201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14201;

Registro14201 crear_registro14201(int id) {
    Registro14201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14201(Registro14201 r) {
    return r.valor + r.id;
}
