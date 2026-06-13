// fichero 34857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34857;

Registro34857 crear_registro34857(int id) {
    Registro34857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34857(Registro34857 r) {
    return r.valor + r.id;
}
