// fichero 28817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28817;

Registro28817 crear_registro28817(int id) {
    Registro28817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28817(Registro28817 r) {
    return r.valor + r.id;
}
