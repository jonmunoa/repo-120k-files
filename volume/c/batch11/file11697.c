// fichero 11697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11697;

Registro11697 crear_registro11697(int id) {
    Registro11697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11697(Registro11697 r) {
    return r.valor + r.id;
}
