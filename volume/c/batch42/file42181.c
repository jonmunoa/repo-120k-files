// fichero 42181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42181;

Registro42181 crear_registro42181(int id) {
    Registro42181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42181(Registro42181 r) {
    return r.valor + r.id;
}
