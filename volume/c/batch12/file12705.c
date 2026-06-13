// fichero 12705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12705;

Registro12705 crear_registro12705(int id) {
    Registro12705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12705(Registro12705 r) {
    return r.valor + r.id;
}
