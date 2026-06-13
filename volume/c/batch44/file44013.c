// fichero 44013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44013;

Registro44013 crear_registro44013(int id) {
    Registro44013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44013(Registro44013 r) {
    return r.valor + r.id;
}
