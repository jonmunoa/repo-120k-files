// fichero 8985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8985;

Registro8985 crear_registro8985(int id) {
    Registro8985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8985(Registro8985 r) {
    return r.valor + r.id;
}
