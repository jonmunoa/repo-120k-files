// fichero 24369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24369;

Registro24369 crear_registro24369(int id) {
    Registro24369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24369(Registro24369 r) {
    return r.valor + r.id;
}
