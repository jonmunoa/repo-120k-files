// fichero 12809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12809;

Registro12809 crear_registro12809(int id) {
    Registro12809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12809(Registro12809 r) {
    return r.valor + r.id;
}
