// fichero 12757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12757;

Registro12757 crear_registro12757(int id) {
    Registro12757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12757(Registro12757 r) {
    return r.valor + r.id;
}
