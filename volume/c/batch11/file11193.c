// fichero 11193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11193;

Registro11193 crear_registro11193(int id) {
    Registro11193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11193(Registro11193 r) {
    return r.valor + r.id;
}
