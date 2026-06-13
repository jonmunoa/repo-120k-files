// fichero 12165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12165;

Registro12165 crear_registro12165(int id) {
    Registro12165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12165(Registro12165 r) {
    return r.valor + r.id;
}
