// fichero 12097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12097;

Registro12097 crear_registro12097(int id) {
    Registro12097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12097(Registro12097 r) {
    return r.valor + r.id;
}
