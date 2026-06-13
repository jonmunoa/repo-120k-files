// fichero 21057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21057;

Registro21057 crear_registro21057(int id) {
    Registro21057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21057(Registro21057 r) {
    return r.valor + r.id;
}
