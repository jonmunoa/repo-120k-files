// fichero 49209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49209;

Registro49209 crear_registro49209(int id) {
    Registro49209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49209(Registro49209 r) {
    return r.valor + r.id;
}
