// fichero 7649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7649;

Registro7649 crear_registro7649(int id) {
    Registro7649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7649(Registro7649 r) {
    return r.valor + r.id;
}
