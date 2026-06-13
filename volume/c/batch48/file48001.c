// fichero 48001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48001;

Registro48001 crear_registro48001(int id) {
    Registro48001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48001(Registro48001 r) {
    return r.valor + r.id;
}
