// fichero 14117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14117;

Registro14117 crear_registro14117(int id) {
    Registro14117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14117(Registro14117 r) {
    return r.valor + r.id;
}
