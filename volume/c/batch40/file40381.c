// fichero 40381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40381;

Registro40381 crear_registro40381(int id) {
    Registro40381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40381(Registro40381 r) {
    return r.valor + r.id;
}
