// fichero 29369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29369;

Registro29369 crear_registro29369(int id) {
    Registro29369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29369(Registro29369 r) {
    return r.valor + r.id;
}
