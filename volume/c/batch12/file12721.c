// fichero 12721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12721;

Registro12721 crear_registro12721(int id) {
    Registro12721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12721(Registro12721 r) {
    return r.valor + r.id;
}
