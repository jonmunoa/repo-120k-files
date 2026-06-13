// fichero 47369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47369;

Registro47369 crear_registro47369(int id) {
    Registro47369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47369(Registro47369 r) {
    return r.valor + r.id;
}
