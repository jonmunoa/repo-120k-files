// fichero 9185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9185;

Registro9185 crear_registro9185(int id) {
    Registro9185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9185(Registro9185 r) {
    return r.valor + r.id;
}
