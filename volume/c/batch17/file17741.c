// fichero 17741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17741;

Registro17741 crear_registro17741(int id) {
    Registro17741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17741(Registro17741 r) {
    return r.valor + r.id;
}
