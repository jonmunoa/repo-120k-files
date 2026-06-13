// fichero 24601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24601;

Registro24601 crear_registro24601(int id) {
    Registro24601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24601(Registro24601 r) {
    return r.valor + r.id;
}
