// fichero 29857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29857;

Registro29857 crear_registro29857(int id) {
    Registro29857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29857(Registro29857 r) {
    return r.valor + r.id;
}
