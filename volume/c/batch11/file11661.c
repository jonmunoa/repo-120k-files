// fichero 11661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11661;

Registro11661 crear_registro11661(int id) {
    Registro11661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11661(Registro11661 r) {
    return r.valor + r.id;
}
