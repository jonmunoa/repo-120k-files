// fichero 11529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11529;

Registro11529 crear_registro11529(int id) {
    Registro11529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11529(Registro11529 r) {
    return r.valor + r.id;
}
