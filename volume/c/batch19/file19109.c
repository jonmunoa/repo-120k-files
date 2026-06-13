// fichero 19109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19109;

Registro19109 crear_registro19109(int id) {
    Registro19109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19109(Registro19109 r) {
    return r.valor + r.id;
}
