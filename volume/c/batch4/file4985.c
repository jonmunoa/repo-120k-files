// fichero 4985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4985;

Registro4985 crear_registro4985(int id) {
    Registro4985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4985(Registro4985 r) {
    return r.valor + r.id;
}
