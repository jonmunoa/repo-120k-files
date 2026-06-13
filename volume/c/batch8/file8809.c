// fichero 8809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8809;

Registro8809 crear_registro8809(int id) {
    Registro8809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8809(Registro8809 r) {
    return r.valor + r.id;
}
