// fichero 27905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27905;

Registro27905 crear_registro27905(int id) {
    Registro27905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27905(Registro27905 r) {
    return r.valor + r.id;
}
