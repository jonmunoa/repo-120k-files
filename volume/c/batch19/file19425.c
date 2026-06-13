// fichero 19425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19425;

Registro19425 crear_registro19425(int id) {
    Registro19425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19425(Registro19425 r) {
    return r.valor + r.id;
}
