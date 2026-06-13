// fichero 11325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11325;

Registro11325 crear_registro11325(int id) {
    Registro11325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11325(Registro11325 r) {
    return r.valor + r.id;
}
