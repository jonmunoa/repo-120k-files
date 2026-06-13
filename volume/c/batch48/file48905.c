// fichero 48905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48905;

Registro48905 crear_registro48905(int id) {
    Registro48905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48905(Registro48905 r) {
    return r.valor + r.id;
}
