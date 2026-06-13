// fichero 39661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39661;

Registro39661 crear_registro39661(int id) {
    Registro39661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39661(Registro39661 r) {
    return r.valor + r.id;
}
