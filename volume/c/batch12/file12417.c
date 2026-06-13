// fichero 12417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12417;

Registro12417 crear_registro12417(int id) {
    Registro12417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12417(Registro12417 r) {
    return r.valor + r.id;
}
