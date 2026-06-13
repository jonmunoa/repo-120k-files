// fichero 14001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14001;

Registro14001 crear_registro14001(int id) {
    Registro14001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14001(Registro14001 r) {
    return r.valor + r.id;
}
