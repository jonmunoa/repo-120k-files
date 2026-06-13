// fichero 28985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28985;

Registro28985 crear_registro28985(int id) {
    Registro28985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28985(Registro28985 r) {
    return r.valor + r.id;
}
