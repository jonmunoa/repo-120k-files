// fichero 34517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34517;

Registro34517 crear_registro34517(int id) {
    Registro34517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34517(Registro34517 r) {
    return r.valor + r.id;
}
