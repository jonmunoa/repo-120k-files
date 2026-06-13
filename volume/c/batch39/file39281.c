// fichero 39281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39281;

Registro39281 crear_registro39281(int id) {
    Registro39281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39281(Registro39281 r) {
    return r.valor + r.id;
}
