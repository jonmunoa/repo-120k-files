// fichero 41641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41641;

Registro41641 crear_registro41641(int id) {
    Registro41641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41641(Registro41641 r) {
    return r.valor + r.id;
}
