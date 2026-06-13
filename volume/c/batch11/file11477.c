// fichero 11477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11477;

Registro11477 crear_registro11477(int id) {
    Registro11477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11477(Registro11477 r) {
    return r.valor + r.id;
}
