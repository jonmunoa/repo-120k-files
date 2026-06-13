// fichero 11289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11289;

Registro11289 crear_registro11289(int id) {
    Registro11289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11289(Registro11289 r) {
    return r.valor + r.id;
}
