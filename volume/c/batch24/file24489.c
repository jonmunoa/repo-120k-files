// fichero 24489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24489;

Registro24489 crear_registro24489(int id) {
    Registro24489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24489(Registro24489 r) {
    return r.valor + r.id;
}
