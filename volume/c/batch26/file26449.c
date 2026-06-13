// fichero 26449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26449;

Registro26449 crear_registro26449(int id) {
    Registro26449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26449(Registro26449 r) {
    return r.valor + r.id;
}
