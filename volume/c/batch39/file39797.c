// fichero 39797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39797;

Registro39797 crear_registro39797(int id) {
    Registro39797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39797(Registro39797 r) {
    return r.valor + r.id;
}
