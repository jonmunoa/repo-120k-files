// fichero 20061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20061;

Registro20061 crear_registro20061(int id) {
    Registro20061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20061(Registro20061 r) {
    return r.valor + r.id;
}
