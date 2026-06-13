// fichero 11757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11757;

Registro11757 crear_registro11757(int id) {
    Registro11757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11757(Registro11757 r) {
    return r.valor + r.id;
}
