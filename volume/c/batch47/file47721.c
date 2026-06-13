// fichero 47721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47721;

Registro47721 crear_registro47721(int id) {
    Registro47721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47721(Registro47721 r) {
    return r.valor + r.id;
}
