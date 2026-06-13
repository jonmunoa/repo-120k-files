// fichero 38317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38317;

Registro38317 crear_registro38317(int id) {
    Registro38317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38317(Registro38317 r) {
    return r.valor + r.id;
}
