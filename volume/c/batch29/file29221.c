// fichero 29221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29221;

Registro29221 crear_registro29221(int id) {
    Registro29221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29221(Registro29221 r) {
    return r.valor + r.id;
}
