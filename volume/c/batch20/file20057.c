// fichero 20057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20057;

Registro20057 crear_registro20057(int id) {
    Registro20057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20057(Registro20057 r) {
    return r.valor + r.id;
}
