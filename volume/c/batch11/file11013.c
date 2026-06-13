// fichero 11013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11013;

Registro11013 crear_registro11013(int id) {
    Registro11013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11013(Registro11013 r) {
    return r.valor + r.id;
}
