// fichero 34673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34673;

Registro34673 crear_registro34673(int id) {
    Registro34673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34673(Registro34673 r) {
    return r.valor + r.id;
}
