// fichero 12845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12845;

Registro12845 crear_registro12845(int id) {
    Registro12845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12845(Registro12845 r) {
    return r.valor + r.id;
}
