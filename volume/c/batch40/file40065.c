// fichero 40065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40065;

Registro40065 crear_registro40065(int id) {
    Registro40065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40065(Registro40065 r) {
    return r.valor + r.id;
}
