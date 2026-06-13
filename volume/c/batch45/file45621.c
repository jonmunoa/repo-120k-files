// fichero 45621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45621;

Registro45621 crear_registro45621(int id) {
    Registro45621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45621(Registro45621 r) {
    return r.valor + r.id;
}
