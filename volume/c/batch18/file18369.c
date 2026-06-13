// fichero 18369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18369;

Registro18369 crear_registro18369(int id) {
    Registro18369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18369(Registro18369 r) {
    return r.valor + r.id;
}
