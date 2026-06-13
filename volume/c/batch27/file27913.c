// fichero 27913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27913;

Registro27913 crear_registro27913(int id) {
    Registro27913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27913(Registro27913 r) {
    return r.valor + r.id;
}
