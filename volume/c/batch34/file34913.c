// fichero 34913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34913;

Registro34913 crear_registro34913(int id) {
    Registro34913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34913(Registro34913 r) {
    return r.valor + r.id;
}
