// fichero 38049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38049;

Registro38049 crear_registro38049(int id) {
    Registro38049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38049(Registro38049 r) {
    return r.valor + r.id;
}
