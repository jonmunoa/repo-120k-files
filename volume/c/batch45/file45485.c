// fichero 45485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45485;

Registro45485 crear_registro45485(int id) {
    Registro45485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45485(Registro45485 r) {
    return r.valor + r.id;
}
