// fichero 18353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18353;

Registro18353 crear_registro18353(int id) {
    Registro18353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18353(Registro18353 r) {
    return r.valor + r.id;
}
