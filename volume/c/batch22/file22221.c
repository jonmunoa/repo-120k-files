// fichero 22221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22221;

Registro22221 crear_registro22221(int id) {
    Registro22221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22221(Registro22221 r) {
    return r.valor + r.id;
}
