// fichero 797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro797;

Registro797 crear_registro797(int id) {
    Registro797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro797(Registro797 r) {
    return r.valor + r.id;
}
