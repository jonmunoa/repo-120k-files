// fichero 12873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12873;

Registro12873 crear_registro12873(int id) {
    Registro12873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12873(Registro12873 r) {
    return r.valor + r.id;
}
