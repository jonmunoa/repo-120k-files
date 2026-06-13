// fichero 7817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7817;

Registro7817 crear_registro7817(int id) {
    Registro7817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7817(Registro7817 r) {
    return r.valor + r.id;
}
