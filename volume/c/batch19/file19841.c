// fichero 19841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19841;

Registro19841 crear_registro19841(int id) {
    Registro19841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19841(Registro19841 r) {
    return r.valor + r.id;
}
