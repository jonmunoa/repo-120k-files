// fichero 30945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30945;

Registro30945 crear_registro30945(int id) {
    Registro30945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30945(Registro30945 r) {
    return r.valor + r.id;
}
