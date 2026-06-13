// fichero 12265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12265;

Registro12265 crear_registro12265(int id) {
    Registro12265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12265(Registro12265 r) {
    return r.valor + r.id;
}
