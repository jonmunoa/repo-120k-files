// fichero 7913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7913;

Registro7913 crear_registro7913(int id) {
    Registro7913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7913(Registro7913 r) {
    return r.valor + r.id;
}
