// fichero 19621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19621;

Registro19621 crear_registro19621(int id) {
    Registro19621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19621(Registro19621 r) {
    return r.valor + r.id;
}
