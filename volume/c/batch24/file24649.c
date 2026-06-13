// fichero 24649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24649;

Registro24649 crear_registro24649(int id) {
    Registro24649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24649(Registro24649 r) {
    return r.valor + r.id;
}
