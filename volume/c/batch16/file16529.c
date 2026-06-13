// fichero 16529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16529;

Registro16529 crear_registro16529(int id) {
    Registro16529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16529(Registro16529 r) {
    return r.valor + r.id;
}
