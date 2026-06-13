// fichero 44485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44485;

Registro44485 crear_registro44485(int id) {
    Registro44485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44485(Registro44485 r) {
    return r.valor + r.id;
}
