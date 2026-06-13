// fichero 11629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11629;

Registro11629 crear_registro11629(int id) {
    Registro11629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11629(Registro11629 r) {
    return r.valor + r.id;
}
