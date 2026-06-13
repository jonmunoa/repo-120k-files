// fichero 52905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52905;

Registro52905 crear_registro52905(int id) {
    Registro52905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52905(Registro52905 r) {
    return r.valor + r.id;
}
