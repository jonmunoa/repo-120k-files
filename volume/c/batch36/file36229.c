// fichero 36229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36229;

Registro36229 crear_registro36229(int id) {
    Registro36229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36229(Registro36229 r) {
    return r.valor + r.id;
}
