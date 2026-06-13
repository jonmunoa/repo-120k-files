// fichero 11861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11861;

Registro11861 crear_registro11861(int id) {
    Registro11861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11861(Registro11861 r) {
    return r.valor + r.id;
}
