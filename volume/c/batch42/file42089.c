// fichero 42089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42089;

Registro42089 crear_registro42089(int id) {
    Registro42089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42089(Registro42089 r) {
    return r.valor + r.id;
}
