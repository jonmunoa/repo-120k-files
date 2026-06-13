// fichero 12905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12905;

Registro12905 crear_registro12905(int id) {
    Registro12905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12905(Registro12905 r) {
    return r.valor + r.id;
}
