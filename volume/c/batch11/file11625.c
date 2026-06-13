// fichero 11625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11625;

Registro11625 crear_registro11625(int id) {
    Registro11625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11625(Registro11625 r) {
    return r.valor + r.id;
}
