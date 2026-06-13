// fichero 11181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11181;

Registro11181 crear_registro11181(int id) {
    Registro11181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11181(Registro11181 r) {
    return r.valor + r.id;
}
