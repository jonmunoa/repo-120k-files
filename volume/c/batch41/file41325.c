// fichero 41325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41325;

Registro41325 crear_registro41325(int id) {
    Registro41325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41325(Registro41325 r) {
    return r.valor + r.id;
}
