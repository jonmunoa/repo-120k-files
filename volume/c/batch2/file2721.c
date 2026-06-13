// fichero 2721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2721;

Registro2721 crear_registro2721(int id) {
    Registro2721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2721(Registro2721 r) {
    return r.valor + r.id;
}
