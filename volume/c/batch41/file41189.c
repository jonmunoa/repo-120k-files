// fichero 41189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41189;

Registro41189 crear_registro41189(int id) {
    Registro41189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41189(Registro41189 r) {
    return r.valor + r.id;
}
