// fichero 12317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12317;

Registro12317 crear_registro12317(int id) {
    Registro12317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12317(Registro12317 r) {
    return r.valor + r.id;
}
