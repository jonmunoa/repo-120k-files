// fichero 17325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17325;

Registro17325 crear_registro17325(int id) {
    Registro17325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17325(Registro17325 r) {
    return r.valor + r.id;
}
