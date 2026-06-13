// fichero 12393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12393;

Registro12393 crear_registro12393(int id) {
    Registro12393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12393(Registro12393 r) {
    return r.valor + r.id;
}
