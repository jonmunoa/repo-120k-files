// fichero 7893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7893;

Registro7893 crear_registro7893(int id) {
    Registro7893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7893(Registro7893 r) {
    return r.valor + r.id;
}
