// fichero 26877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26877;

Registro26877 crear_registro26877(int id) {
    Registro26877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26877(Registro26877 r) {
    return r.valor + r.id;
}
