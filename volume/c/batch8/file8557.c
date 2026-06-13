// fichero 8557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8557;

Registro8557 crear_registro8557(int id) {
    Registro8557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8557(Registro8557 r) {
    return r.valor + r.id;
}
