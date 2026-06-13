// fichero 29181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29181;

Registro29181 crear_registro29181(int id) {
    Registro29181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29181(Registro29181 r) {
    return r.valor + r.id;
}
