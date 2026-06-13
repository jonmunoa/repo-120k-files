// fichero 35125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35125;

Registro35125 crear_registro35125(int id) {
    Registro35125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35125(Registro35125 r) {
    return r.valor + r.id;
}
