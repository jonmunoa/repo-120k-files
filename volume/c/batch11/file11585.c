// fichero 11585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11585;

Registro11585 crear_registro11585(int id) {
    Registro11585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11585(Registro11585 r) {
    return r.valor + r.id;
}
