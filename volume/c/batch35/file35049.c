// fichero 35049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35049;

Registro35049 crear_registro35049(int id) {
    Registro35049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35049(Registro35049 r) {
    return r.valor + r.id;
}
