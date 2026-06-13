// fichero 27057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27057;

Registro27057 crear_registro27057(int id) {
    Registro27057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27057(Registro27057 r) {
    return r.valor + r.id;
}
