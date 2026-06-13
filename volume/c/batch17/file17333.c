// fichero 17333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17333;

Registro17333 crear_registro17333(int id) {
    Registro17333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17333(Registro17333 r) {
    return r.valor + r.id;
}
