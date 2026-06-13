// fichero 39905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39905;

Registro39905 crear_registro39905(int id) {
    Registro39905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39905(Registro39905 r) {
    return r.valor + r.id;
}
