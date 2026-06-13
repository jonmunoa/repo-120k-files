// fichero 11357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11357;

Registro11357 crear_registro11357(int id) {
    Registro11357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11357(Registro11357 r) {
    return r.valor + r.id;
}
