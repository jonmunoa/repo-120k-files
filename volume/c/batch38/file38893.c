// fichero 38893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38893;

Registro38893 crear_registro38893(int id) {
    Registro38893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38893(Registro38893 r) {
    return r.valor + r.id;
}
