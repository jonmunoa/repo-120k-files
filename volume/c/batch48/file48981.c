// fichero 48981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48981;

Registro48981 crear_registro48981(int id) {
    Registro48981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48981(Registro48981 r) {
    return r.valor + r.id;
}
