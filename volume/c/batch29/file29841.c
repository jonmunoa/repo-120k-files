// fichero 29841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29841;

Registro29841 crear_registro29841(int id) {
    Registro29841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29841(Registro29841 r) {
    return r.valor + r.id;
}
