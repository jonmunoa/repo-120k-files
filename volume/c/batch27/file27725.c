// fichero 27725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27725;

Registro27725 crear_registro27725(int id) {
    Registro27725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27725(Registro27725 r) {
    return r.valor + r.id;
}
