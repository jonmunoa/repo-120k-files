// fichero 12021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12021;

Registro12021 crear_registro12021(int id) {
    Registro12021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12021(Registro12021 r) {
    return r.valor + r.id;
}
