// fichero 12949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12949;

Registro12949 crear_registro12949(int id) {
    Registro12949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12949(Registro12949 r) {
    return r.valor + r.id;
}
