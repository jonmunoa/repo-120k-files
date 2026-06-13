// fichero 42093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42093;

Registro42093 crear_registro42093(int id) {
    Registro42093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42093(Registro42093 r) {
    return r.valor + r.id;
}
