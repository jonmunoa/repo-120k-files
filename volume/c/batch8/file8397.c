// fichero 8397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8397;

Registro8397 crear_registro8397(int id) {
    Registro8397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8397(Registro8397 r) {
    return r.valor + r.id;
}
