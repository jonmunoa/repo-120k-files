// fichero 34713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34713;

Registro34713 crear_registro34713(int id) {
    Registro34713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34713(Registro34713 r) {
    return r.valor + r.id;
}
