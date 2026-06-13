// fichero 49649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49649;

Registro49649 crear_registro49649(int id) {
    Registro49649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49649(Registro49649 r) {
    return r.valor + r.id;
}
