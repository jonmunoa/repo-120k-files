// fichero 17057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17057;

Registro17057 crear_registro17057(int id) {
    Registro17057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17057(Registro17057 r) {
    return r.valor + r.id;
}
