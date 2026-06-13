// fichero 12401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12401;

Registro12401 crear_registro12401(int id) {
    Registro12401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12401(Registro12401 r) {
    return r.valor + r.id;
}
