// fichero 12189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12189;

Registro12189 crear_registro12189(int id) {
    Registro12189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12189(Registro12189 r) {
    return r.valor + r.id;
}
