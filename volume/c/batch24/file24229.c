// fichero 24229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24229;

Registro24229 crear_registro24229(int id) {
    Registro24229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24229(Registro24229 r) {
    return r.valor + r.id;
}
