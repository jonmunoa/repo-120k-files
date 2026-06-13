// fichero 6529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6529;

Registro6529 crear_registro6529(int id) {
    Registro6529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6529(Registro6529 r) {
    return r.valor + r.id;
}
