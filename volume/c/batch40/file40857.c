// fichero 40857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40857;

Registro40857 crear_registro40857(int id) {
    Registro40857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40857(Registro40857 r) {
    return r.valor + r.id;
}
