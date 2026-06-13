// fichero 8273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8273;

Registro8273 crear_registro8273(int id) {
    Registro8273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8273(Registro8273 r) {
    return r.valor + r.id;
}
