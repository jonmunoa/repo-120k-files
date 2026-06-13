// fichero 26265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26265;

Registro26265 crear_registro26265(int id) {
    Registro26265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26265(Registro26265 r) {
    return r.valor + r.id;
}
