// fichero 11665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11665;

Registro11665 crear_registro11665(int id) {
    Registro11665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11665(Registro11665 r) {
    return r.valor + r.id;
}
