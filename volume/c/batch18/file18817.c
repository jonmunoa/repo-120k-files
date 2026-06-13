// fichero 18817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18817;

Registro18817 crear_registro18817(int id) {
    Registro18817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18817(Registro18817 r) {
    return r.valor + r.id;
}
