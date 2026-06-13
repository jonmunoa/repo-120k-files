// fichero 6353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6353;

Registro6353 crear_registro6353(int id) {
    Registro6353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6353(Registro6353 r) {
    return r.valor + r.id;
}
