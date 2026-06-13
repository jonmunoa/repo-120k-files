// fichero 17677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17677;

Registro17677 crear_registro17677(int id) {
    Registro17677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17677(Registro17677 r) {
    return r.valor + r.id;
}
