// fichero 41221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41221;

Registro41221 crear_registro41221(int id) {
    Registro41221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41221(Registro41221 r) {
    return r.valor + r.id;
}
