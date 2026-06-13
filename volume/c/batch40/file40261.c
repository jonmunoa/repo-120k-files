// fichero 40261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40261;

Registro40261 crear_registro40261(int id) {
    Registro40261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40261(Registro40261 r) {
    return r.valor + r.id;
}
