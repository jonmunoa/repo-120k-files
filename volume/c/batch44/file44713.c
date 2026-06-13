// fichero 44713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44713;

Registro44713 crear_registro44713(int id) {
    Registro44713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44713(Registro44713 r) {
    return r.valor + r.id;
}
