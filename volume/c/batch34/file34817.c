// fichero 34817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34817;

Registro34817 crear_registro34817(int id) {
    Registro34817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34817(Registro34817 r) {
    return r.valor + r.id;
}
