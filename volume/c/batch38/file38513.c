// fichero 38513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38513;

Registro38513 crear_registro38513(int id) {
    Registro38513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38513(Registro38513 r) {
    return r.valor + r.id;
}
