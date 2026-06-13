// fichero 22985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22985;

Registro22985 crear_registro22985(int id) {
    Registro22985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22985(Registro22985 r) {
    return r.valor + r.id;
}
