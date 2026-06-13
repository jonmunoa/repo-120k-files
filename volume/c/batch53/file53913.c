// fichero 53913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53913;

Registro53913 crear_registro53913(int id) {
    Registro53913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53913(Registro53913 r) {
    return r.valor + r.id;
}
