// fichero 38669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38669;

Registro38669 crear_registro38669(int id) {
    Registro38669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38669(Registro38669 r) {
    return r.valor + r.id;
}
