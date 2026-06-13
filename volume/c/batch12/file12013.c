// fichero 12013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12013;

Registro12013 crear_registro12013(int id) {
    Registro12013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12013(Registro12013 r) {
    return r.valor + r.id;
}
