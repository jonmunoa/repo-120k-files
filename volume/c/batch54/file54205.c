// fichero 54205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54205;

Registro54205 crear_registro54205(int id) {
    Registro54205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54205(Registro54205 r) {
    return r.valor + r.id;
}
