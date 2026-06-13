// fichero 9025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9025;

Registro9025 crear_registro9025(int id) {
    Registro9025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9025(Registro9025 r) {
    return r.valor + r.id;
}
