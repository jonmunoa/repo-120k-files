// fichero 41229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41229;

Registro41229 crear_registro41229(int id) {
    Registro41229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41229(Registro41229 r) {
    return r.valor + r.id;
}
