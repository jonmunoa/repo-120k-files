// fichero 4485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4485;

Registro4485 crear_registro4485(int id) {
    Registro4485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4485(Registro4485 r) {
    return r.valor + r.id;
}
