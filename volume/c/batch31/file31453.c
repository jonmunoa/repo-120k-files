// fichero 31453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31453;

Registro31453 crear_registro31453(int id) {
    Registro31453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31453(Registro31453 r) {
    return r.valor + r.id;
}
