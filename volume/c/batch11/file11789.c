// fichero 11789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11789;

Registro11789 crear_registro11789(int id) {
    Registro11789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11789(Registro11789 r) {
    return r.valor + r.id;
}
