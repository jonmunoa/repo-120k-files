// fichero 37985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37985;

Registro37985 crear_registro37985(int id) {
    Registro37985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37985(Registro37985 r) {
    return r.valor + r.id;
}
