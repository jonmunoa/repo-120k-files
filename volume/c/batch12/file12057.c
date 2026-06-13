// fichero 12057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12057;

Registro12057 crear_registro12057(int id) {
    Registro12057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12057(Registro12057 r) {
    return r.valor + r.id;
}
