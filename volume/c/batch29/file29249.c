// fichero 29249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29249;

Registro29249 crear_registro29249(int id) {
    Registro29249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29249(Registro29249 r) {
    return r.valor + r.id;
}
