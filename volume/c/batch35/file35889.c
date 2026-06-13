// fichero 35889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35889;

Registro35889 crear_registro35889(int id) {
    Registro35889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35889(Registro35889 r) {
    return r.valor + r.id;
}
