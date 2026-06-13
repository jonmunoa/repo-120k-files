// fichero 4381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4381;

Registro4381 crear_registro4381(int id) {
    Registro4381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4381(Registro4381 r) {
    return r.valor + r.id;
}
