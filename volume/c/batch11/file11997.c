// fichero 11997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11997;

Registro11997 crear_registro11997(int id) {
    Registro11997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11997(Registro11997 r) {
    return r.valor + r.id;
}
