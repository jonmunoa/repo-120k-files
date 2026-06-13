// fichero 11249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11249;

Registro11249 crear_registro11249(int id) {
    Registro11249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11249(Registro11249 r) {
    return r.valor + r.id;
}
