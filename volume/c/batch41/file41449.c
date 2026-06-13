// fichero 41449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41449;

Registro41449 crear_registro41449(int id) {
    Registro41449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41449(Registro41449 r) {
    return r.valor + r.id;
}
