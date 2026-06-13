// fichero 6425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6425;

Registro6425 crear_registro6425(int id) {
    Registro6425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6425(Registro6425 r) {
    return r.valor + r.id;
}
