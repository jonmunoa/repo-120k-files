// fichero 11033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11033;

Registro11033 crear_registro11033(int id) {
    Registro11033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11033(Registro11033 r) {
    return r.valor + r.id;
}
