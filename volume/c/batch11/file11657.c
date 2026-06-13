// fichero 11657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11657;

Registro11657 crear_registro11657(int id) {
    Registro11657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11657(Registro11657 r) {
    return r.valor + r.id;
}
