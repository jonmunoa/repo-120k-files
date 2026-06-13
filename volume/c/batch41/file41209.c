// fichero 41209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41209;

Registro41209 crear_registro41209(int id) {
    Registro41209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41209(Registro41209 r) {
    return r.valor + r.id;
}
