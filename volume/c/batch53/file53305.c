// fichero 53305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53305;

Registro53305 crear_registro53305(int id) {
    Registro53305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53305(Registro53305 r) {
    return r.valor + r.id;
}
