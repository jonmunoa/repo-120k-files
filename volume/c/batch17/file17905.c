// fichero 17905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17905;

Registro17905 crear_registro17905(int id) {
    Registro17905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17905(Registro17905 r) {
    return r.valor + r.id;
}
