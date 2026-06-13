// fichero 35761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35761;

Registro35761 crear_registro35761(int id) {
    Registro35761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35761(Registro35761 r) {
    return r.valor + r.id;
}
