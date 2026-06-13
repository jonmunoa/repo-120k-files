// fichero 11269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11269;

Registro11269 crear_registro11269(int id) {
    Registro11269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11269(Registro11269 r) {
    return r.valor + r.id;
}
