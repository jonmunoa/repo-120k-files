// fichero 41877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41877;

Registro41877 crear_registro41877(int id) {
    Registro41877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41877(Registro41877 r) {
    return r.valor + r.id;
}
