// fichero 22829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22829;

Registro22829 crear_registro22829(int id) {
    Registro22829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22829(Registro22829 r) {
    return r.valor + r.id;
}
