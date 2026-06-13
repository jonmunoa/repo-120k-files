// fichero 35997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35997;

Registro35997 crear_registro35997(int id) {
    Registro35997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35997(Registro35997 r) {
    return r.valor + r.id;
}
