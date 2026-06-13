// fichero 18517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18517;

Registro18517 crear_registro18517(int id) {
    Registro18517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18517(Registro18517 r) {
    return r.valor + r.id;
}
