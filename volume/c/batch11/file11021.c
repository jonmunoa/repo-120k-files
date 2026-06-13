// fichero 11021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11021;

Registro11021 crear_registro11021(int id) {
    Registro11021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11021(Registro11021 r) {
    return r.valor + r.id;
}
