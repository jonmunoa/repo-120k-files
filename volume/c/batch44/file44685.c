// fichero 44685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44685;

Registro44685 crear_registro44685(int id) {
    Registro44685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44685(Registro44685 r) {
    return r.valor + r.id;
}
