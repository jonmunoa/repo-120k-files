// fichero 12937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12937;

Registro12937 crear_registro12937(int id) {
    Registro12937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12937(Registro12937 r) {
    return r.valor + r.id;
}
