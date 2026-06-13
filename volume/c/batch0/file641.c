// fichero 641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro641;

Registro641 crear_registro641(int id) {
    Registro641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro641(Registro641 r) {
    return r.valor + r.id;
}
