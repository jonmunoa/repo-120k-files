// fichero 41665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41665;

Registro41665 crear_registro41665(int id) {
    Registro41665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41665(Registro41665 r) {
    return r.valor + r.id;
}
