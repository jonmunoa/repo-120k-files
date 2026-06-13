// fichero 9229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9229;

Registro9229 crear_registro9229(int id) {
    Registro9229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9229(Registro9229 r) {
    return r.valor + r.id;
}
