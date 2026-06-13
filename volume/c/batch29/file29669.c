// fichero 29669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29669;

Registro29669 crear_registro29669(int id) {
    Registro29669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29669(Registro29669 r) {
    return r.valor + r.id;
}
