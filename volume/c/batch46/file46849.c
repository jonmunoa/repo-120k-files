// fichero 46849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46849;

Registro46849 crear_registro46849(int id) {
    Registro46849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46849(Registro46849 r) {
    return r.valor + r.id;
}
