// fichero 17577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17577;

Registro17577 crear_registro17577(int id) {
    Registro17577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17577(Registro17577 r) {
    return r.valor + r.id;
}
