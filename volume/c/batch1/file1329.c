// fichero 1329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1329;

Registro1329 crear_registro1329(int id) {
    Registro1329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1329(Registro1329 r) {
    return r.valor + r.id;
}
