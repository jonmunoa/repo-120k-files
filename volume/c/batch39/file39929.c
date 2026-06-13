// fichero 39929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39929;

Registro39929 crear_registro39929(int id) {
    Registro39929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39929(Registro39929 r) {
    return r.valor + r.id;
}
