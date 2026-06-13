// fichero 45333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45333;

Registro45333 crear_registro45333(int id) {
    Registro45333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45333(Registro45333 r) {
    return r.valor + r.id;
}
