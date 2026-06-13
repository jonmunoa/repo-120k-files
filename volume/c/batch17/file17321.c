// fichero 17321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17321;

Registro17321 crear_registro17321(int id) {
    Registro17321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17321(Registro17321 r) {
    return r.valor + r.id;
}
