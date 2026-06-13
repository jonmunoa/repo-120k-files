// fichero 48893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48893;

Registro48893 crear_registro48893(int id) {
    Registro48893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48893(Registro48893 r) {
    return r.valor + r.id;
}
