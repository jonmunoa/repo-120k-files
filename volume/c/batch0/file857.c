// fichero 857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro857;

Registro857 crear_registro857(int id) {
    Registro857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro857(Registro857 r) {
    return r.valor + r.id;
}
