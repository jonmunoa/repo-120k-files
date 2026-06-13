// fichero 7909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7909;

Registro7909 crear_registro7909(int id) {
    Registro7909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7909(Registro7909 r) {
    return r.valor + r.id;
}
