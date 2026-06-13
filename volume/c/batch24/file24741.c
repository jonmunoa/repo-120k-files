// fichero 24741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24741;

Registro24741 crear_registro24741(int id) {
    Registro24741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24741(Registro24741 r) {
    return r.valor + r.id;
}
