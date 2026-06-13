// fichero 12093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12093;

Registro12093 crear_registro12093(int id) {
    Registro12093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12093(Registro12093 r) {
    return r.valor + r.id;
}
