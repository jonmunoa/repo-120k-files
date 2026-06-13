// fichero 36373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36373;

Registro36373 crear_registro36373(int id) {
    Registro36373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36373(Registro36373 r) {
    return r.valor + r.id;
}
