// fichero 38337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38337;

Registro38337 crear_registro38337(int id) {
    Registro38337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38337(Registro38337 r) {
    return r.valor + r.id;
}
