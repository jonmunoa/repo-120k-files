// fichero 12145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12145;

Registro12145 crear_registro12145(int id) {
    Registro12145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12145(Registro12145 r) {
    return r.valor + r.id;
}
