// fichero 39865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39865;

Registro39865 crear_registro39865(int id) {
    Registro39865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39865(Registro39865 r) {
    return r.valor + r.id;
}
