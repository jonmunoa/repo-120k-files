// fichero 15841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15841;

Registro15841 crear_registro15841(int id) {
    Registro15841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15841(Registro15841 r) {
    return r.valor + r.id;
}
