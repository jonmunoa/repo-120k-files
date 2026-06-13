// fichero 35725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35725;

Registro35725 crear_registro35725(int id) {
    Registro35725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35725(Registro35725 r) {
    return r.valor + r.id;
}
