// fichero 36357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36357;

Registro36357 crear_registro36357(int id) {
    Registro36357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36357(Registro36357 r) {
    return r.valor + r.id;
}
