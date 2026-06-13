// fichero 34037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34037;

Registro34037 crear_registro34037(int id) {
    Registro34037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34037(Registro34037 r) {
    return r.valor + r.id;
}
