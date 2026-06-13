// fichero 44129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44129;

Registro44129 crear_registro44129(int id) {
    Registro44129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44129(Registro44129 r) {
    return r.valor + r.id;
}
