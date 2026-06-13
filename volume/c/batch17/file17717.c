// fichero 17717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17717;

Registro17717 crear_registro17717(int id) {
    Registro17717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17717(Registro17717 r) {
    return r.valor + r.id;
}
