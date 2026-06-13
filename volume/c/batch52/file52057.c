// fichero 52057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52057;

Registro52057 crear_registro52057(int id) {
    Registro52057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52057(Registro52057 r) {
    return r.valor + r.id;
}
