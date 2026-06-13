// fichero 12789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12789;

Registro12789 crear_registro12789(int id) {
    Registro12789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12789(Registro12789 r) {
    return r.valor + r.id;
}
