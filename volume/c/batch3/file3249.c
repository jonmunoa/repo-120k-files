// fichero 3249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3249;

Registro3249 crear_registro3249(int id) {
    Registro3249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3249(Registro3249 r) {
    return r.valor + r.id;
}
