// fichero 11885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11885;

Registro11885 crear_registro11885(int id) {
    Registro11885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11885(Registro11885 r) {
    return r.valor + r.id;
}
