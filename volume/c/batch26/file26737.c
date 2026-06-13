// fichero 26737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26737;

Registro26737 crear_registro26737(int id) {
    Registro26737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26737(Registro26737 r) {
    return r.valor + r.id;
}
