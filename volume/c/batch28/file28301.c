// fichero 28301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28301;

Registro28301 crear_registro28301(int id) {
    Registro28301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28301(Registro28301 r) {
    return r.valor + r.id;
}
