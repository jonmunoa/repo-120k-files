// fichero 29757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29757;

Registro29757 crear_registro29757(int id) {
    Registro29757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29757(Registro29757 r) {
    return r.valor + r.id;
}
