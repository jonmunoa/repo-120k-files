// fichero 6313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6313;

Registro6313 crear_registro6313(int id) {
    Registro6313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6313(Registro6313 r) {
    return r.valor + r.id;
}
