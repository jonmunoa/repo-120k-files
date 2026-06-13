// fichero 11953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11953;

Registro11953 crear_registro11953(int id) {
    Registro11953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11953(Registro11953 r) {
    return r.valor + r.id;
}
