// fichero 44057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44057;

Registro44057 crear_registro44057(int id) {
    Registro44057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44057(Registro44057 r) {
    return r.valor + r.id;
}
