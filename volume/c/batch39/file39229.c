// fichero 39229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39229;

Registro39229 crear_registro39229(int id) {
    Registro39229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39229(Registro39229 r) {
    return r.valor + r.id;
}
