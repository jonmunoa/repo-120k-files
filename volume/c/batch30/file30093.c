// fichero 30093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30093;

Registro30093 crear_registro30093(int id) {
    Registro30093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30093(Registro30093 r) {
    return r.valor + r.id;
}
