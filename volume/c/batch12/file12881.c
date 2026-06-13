// fichero 12881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12881;

Registro12881 crear_registro12881(int id) {
    Registro12881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12881(Registro12881 r) {
    return r.valor + r.id;
}
