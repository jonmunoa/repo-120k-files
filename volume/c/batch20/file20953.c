// fichero 20953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20953;

Registro20953 crear_registro20953(int id) {
    Registro20953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20953(Registro20953 r) {
    return r.valor + r.id;
}
