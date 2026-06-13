// fichero 22417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22417;

Registro22417 crear_registro22417(int id) {
    Registro22417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22417(Registro22417 r) {
    return r.valor + r.id;
}
