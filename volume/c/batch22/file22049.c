// fichero 22049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22049;

Registro22049 crear_registro22049(int id) {
    Registro22049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22049(Registro22049 r) {
    return r.valor + r.id;
}
