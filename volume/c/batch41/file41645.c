// fichero 41645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41645;

Registro41645 crear_registro41645(int id) {
    Registro41645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41645(Registro41645 r) {
    return r.valor + r.id;
}
