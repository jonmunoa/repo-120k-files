// fichero 18985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18985;

Registro18985 crear_registro18985(int id) {
    Registro18985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18985(Registro18985 r) {
    return r.valor + r.id;
}
