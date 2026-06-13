// fichero 20685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20685;

Registro20685 crear_registro20685(int id) {
    Registro20685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20685(Registro20685 r) {
    return r.valor + r.id;
}
