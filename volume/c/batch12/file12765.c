// fichero 12765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12765;

Registro12765 crear_registro12765(int id) {
    Registro12765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12765(Registro12765 r) {
    return r.valor + r.id;
}
