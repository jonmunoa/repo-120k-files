// fichero 41125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41125;

Registro41125 crear_registro41125(int id) {
    Registro41125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41125(Registro41125 r) {
    return r.valor + r.id;
}
