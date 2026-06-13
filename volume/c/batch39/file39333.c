// fichero 39333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39333;

Registro39333 crear_registro39333(int id) {
    Registro39333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39333(Registro39333 r) {
    return r.valor + r.id;
}
