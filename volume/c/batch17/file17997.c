// fichero 17997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17997;

Registro17997 crear_registro17997(int id) {
    Registro17997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17997(Registro17997 r) {
    return r.valor + r.id;
}
