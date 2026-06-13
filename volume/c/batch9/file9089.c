// fichero 9089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9089;

Registro9089 crear_registro9089(int id) {
    Registro9089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9089(Registro9089 r) {
    return r.valor + r.id;
}
