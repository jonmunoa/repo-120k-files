// fichero 19821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19821;

Registro19821 crear_registro19821(int id) {
    Registro19821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19821(Registro19821 r) {
    return r.valor + r.id;
}
