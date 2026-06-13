// fichero 3485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3485;

Registro3485 crear_registro3485(int id) {
    Registro3485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3485(Registro3485 r) {
    return r.valor + r.id;
}
