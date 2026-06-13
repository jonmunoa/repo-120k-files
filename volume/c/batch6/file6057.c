// fichero 6057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6057;

Registro6057 crear_registro6057(int id) {
    Registro6057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6057(Registro6057 r) {
    return r.valor + r.id;
}
