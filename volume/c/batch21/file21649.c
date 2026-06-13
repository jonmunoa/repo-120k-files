// fichero 21649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21649;

Registro21649 crear_registro21649(int id) {
    Registro21649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21649(Registro21649 r) {
    return r.valor + r.id;
}
