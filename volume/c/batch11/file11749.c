// fichero 11749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11749;

Registro11749 crear_registro11749(int id) {
    Registro11749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11749(Registro11749 r) {
    return r.valor + r.id;
}
