// fichero 40649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40649;

Registro40649 crear_registro40649(int id) {
    Registro40649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40649(Registro40649 r) {
    return r.valor + r.id;
}
