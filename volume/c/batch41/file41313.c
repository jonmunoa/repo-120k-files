// fichero 41313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41313;

Registro41313 crear_registro41313(int id) {
    Registro41313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41313(Registro41313 r) {
    return r.valor + r.id;
}
