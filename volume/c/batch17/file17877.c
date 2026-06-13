// fichero 17877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17877;

Registro17877 crear_registro17877(int id) {
    Registro17877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17877(Registro17877 r) {
    return r.valor + r.id;
}
