// fichero 17505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17505;

Registro17505 crear_registro17505(int id) {
    Registro17505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17505(Registro17505 r) {
    return r.valor + r.id;
}
