// fichero 44905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44905;

Registro44905 crear_registro44905(int id) {
    Registro44905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44905(Registro44905 r) {
    return r.valor + r.id;
}
