// fichero 34093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34093;

Registro34093 crear_registro34093(int id) {
    Registro34093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34093(Registro34093 r) {
    return r.valor + r.id;
}
