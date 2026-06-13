// fichero 16877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16877;

Registro16877 crear_registro16877(int id) {
    Registro16877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16877(Registro16877 r) {
    return r.valor + r.id;
}
