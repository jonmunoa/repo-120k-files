// fichero 29805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29805;

Registro29805 crear_registro29805(int id) {
    Registro29805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29805(Registro29805 r) {
    return r.valor + r.id;
}
