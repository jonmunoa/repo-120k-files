// fichero 14521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14521;

Registro14521 crear_registro14521(int id) {
    Registro14521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14521(Registro14521 r) {
    return r.valor + r.id;
}
