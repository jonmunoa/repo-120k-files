// fichero 12117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12117;

Registro12117 crear_registro12117(int id) {
    Registro12117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12117(Registro12117 r) {
    return r.valor + r.id;
}
