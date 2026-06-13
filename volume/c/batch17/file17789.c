// fichero 17789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17789;

Registro17789 crear_registro17789(int id) {
    Registro17789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17789(Registro17789 r) {
    return r.valor + r.id;
}
