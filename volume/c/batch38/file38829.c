// fichero 38829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38829;

Registro38829 crear_registro38829(int id) {
    Registro38829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38829(Registro38829 r) {
    return r.valor + r.id;
}
