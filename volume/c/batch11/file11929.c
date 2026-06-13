// fichero 11929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11929;

Registro11929 crear_registro11929(int id) {
    Registro11929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11929(Registro11929 r) {
    return r.valor + r.id;
}
