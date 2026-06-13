// fichero 11313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11313;

Registro11313 crear_registro11313(int id) {
    Registro11313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11313(Registro11313 r) {
    return r.valor + r.id;
}
