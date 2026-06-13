// fichero 21817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21817;

Registro21817 crear_registro21817(int id) {
    Registro21817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21817(Registro21817 r) {
    return r.valor + r.id;
}
