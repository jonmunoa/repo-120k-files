// fichero 11729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11729;

Registro11729 crear_registro11729(int id) {
    Registro11729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11729(Registro11729 r) {
    return r.valor + r.id;
}
