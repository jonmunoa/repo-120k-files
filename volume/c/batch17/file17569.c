// fichero 17569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17569;

Registro17569 crear_registro17569(int id) {
    Registro17569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17569(Registro17569 r) {
    return r.valor + r.id;
}
