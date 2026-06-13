// fichero 34661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34661;

Registro34661 crear_registro34661(int id) {
    Registro34661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34661(Registro34661 r) {
    return r.valor + r.id;
}
