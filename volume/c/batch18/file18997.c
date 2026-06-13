// fichero 18997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18997;

Registro18997 crear_registro18997(int id) {
    Registro18997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18997(Registro18997 r) {
    return r.valor + r.id;
}
