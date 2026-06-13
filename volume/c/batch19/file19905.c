// fichero 19905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19905;

Registro19905 crear_registro19905(int id) {
    Registro19905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19905(Registro19905 r) {
    return r.valor + r.id;
}
