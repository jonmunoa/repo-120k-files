// fichero 34965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34965;

Registro34965 crear_registro34965(int id) {
    Registro34965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34965(Registro34965 r) {
    return r.valor + r.id;
}
