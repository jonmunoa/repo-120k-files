// fichero 44197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44197;

Registro44197 crear_registro44197(int id) {
    Registro44197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44197(Registro44197 r) {
    return r.valor + r.id;
}
