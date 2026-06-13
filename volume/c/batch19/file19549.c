// fichero 19549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19549;

Registro19549 crear_registro19549(int id) {
    Registro19549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19549(Registro19549 r) {
    return r.valor + r.id;
}
