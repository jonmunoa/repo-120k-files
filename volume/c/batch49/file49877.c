// fichero 49877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49877;

Registro49877 crear_registro49877(int id) {
    Registro49877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49877(Registro49877 r) {
    return r.valor + r.id;
}
