// fichero 7797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7797;

Registro7797 crear_registro7797(int id) {
    Registro7797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7797(Registro7797 r) {
    return r.valor + r.id;
}
