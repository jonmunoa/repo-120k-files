// fichero 19301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19301;

Registro19301 crear_registro19301(int id) {
    Registro19301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19301(Registro19301 r) {
    return r.valor + r.id;
}
