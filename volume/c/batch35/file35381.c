// fichero 35381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35381;

Registro35381 crear_registro35381(int id) {
    Registro35381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35381(Registro35381 r) {
    return r.valor + r.id;
}
