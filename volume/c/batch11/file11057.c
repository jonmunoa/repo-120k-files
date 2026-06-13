// fichero 11057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11057;

Registro11057 crear_registro11057(int id) {
    Registro11057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11057(Registro11057 r) {
    return r.valor + r.id;
}
