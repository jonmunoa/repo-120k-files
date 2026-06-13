// fichero 26241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26241;

Registro26241 crear_registro26241(int id) {
    Registro26241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26241(Registro26241 r) {
    return r.valor + r.id;
}
