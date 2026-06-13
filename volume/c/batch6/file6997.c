// fichero 6997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6997;

Registro6997 crear_registro6997(int id) {
    Registro6997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6997(Registro6997 r) {
    return r.valor + r.id;
}
