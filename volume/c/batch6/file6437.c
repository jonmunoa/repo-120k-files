// fichero 6437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6437;

Registro6437 crear_registro6437(int id) {
    Registro6437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6437(Registro6437 r) {
    return r.valor + r.id;
}
