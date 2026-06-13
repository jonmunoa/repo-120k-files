// fichero 12209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12209;

Registro12209 crear_registro12209(int id) {
    Registro12209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12209(Registro12209 r) {
    return r.valor + r.id;
}
