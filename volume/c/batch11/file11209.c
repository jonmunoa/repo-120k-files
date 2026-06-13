// fichero 11209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11209;

Registro11209 crear_registro11209(int id) {
    Registro11209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11209(Registro11209 r) {
    return r.valor + r.id;
}
