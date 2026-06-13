// fichero 35657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35657;

Registro35657 crear_registro35657(int id) {
    Registro35657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35657(Registro35657 r) {
    return r.valor + r.id;
}
