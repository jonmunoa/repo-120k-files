// fichero 36881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36881;

Registro36881 crear_registro36881(int id) {
    Registro36881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36881(Registro36881 r) {
    return r.valor + r.id;
}
