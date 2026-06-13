// fichero 44153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44153;

Registro44153 crear_registro44153(int id) {
    Registro44153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44153(Registro44153 r) {
    return r.valor + r.id;
}
