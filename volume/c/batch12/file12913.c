// fichero 12913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12913;

Registro12913 crear_registro12913(int id) {
    Registro12913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12913(Registro12913 r) {
    return r.valor + r.id;
}
