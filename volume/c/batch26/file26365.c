// fichero 26365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26365;

Registro26365 crear_registro26365(int id) {
    Registro26365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26365(Registro26365 r) {
    return r.valor + r.id;
}
