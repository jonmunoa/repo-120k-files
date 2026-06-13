// fichero 14477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14477;

Registro14477 crear_registro14477(int id) {
    Registro14477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14477(Registro14477 r) {
    return r.valor + r.id;
}
