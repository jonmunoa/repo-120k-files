// fichero 41769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41769;

Registro41769 crear_registro41769(int id) {
    Registro41769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41769(Registro41769 r) {
    return r.valor + r.id;
}
