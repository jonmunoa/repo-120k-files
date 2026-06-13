// fichero 11169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11169;

Registro11169 crear_registro11169(int id) {
    Registro11169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11169(Registro11169 r) {
    return r.valor + r.id;
}
