// fichero 27845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27845;

Registro27845 crear_registro27845(int id) {
    Registro27845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27845(Registro27845 r) {
    return r.valor + r.id;
}
