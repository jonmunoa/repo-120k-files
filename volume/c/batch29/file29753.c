// fichero 29753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29753;

Registro29753 crear_registro29753(int id) {
    Registro29753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29753(Registro29753 r) {
    return r.valor + r.id;
}
