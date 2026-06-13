// fichero 27793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27793;

Registro27793 crear_registro27793(int id) {
    Registro27793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27793(Registro27793 r) {
    return r.valor + r.id;
}
