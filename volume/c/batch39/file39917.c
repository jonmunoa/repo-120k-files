// fichero 39917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39917;

Registro39917 crear_registro39917(int id) {
    Registro39917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39917(Registro39917 r) {
    return r.valor + r.id;
}
