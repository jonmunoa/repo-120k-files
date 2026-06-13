// fichero 35709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35709;

Registro35709 crear_registro35709(int id) {
    Registro35709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35709(Registro35709 r) {
    return r.valor + r.id;
}
