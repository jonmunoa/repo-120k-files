// fichero 19893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19893;

Registro19893 crear_registro19893(int id) {
    Registro19893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19893(Registro19893 r) {
    return r.valor + r.id;
}
