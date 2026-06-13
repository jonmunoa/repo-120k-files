// fichero 19965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19965;

Registro19965 crear_registro19965(int id) {
    Registro19965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19965(Registro19965 r) {
    return r.valor + r.id;
}
