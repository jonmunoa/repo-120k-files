// fichero 41069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41069;

Registro41069 crear_registro41069(int id) {
    Registro41069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41069(Registro41069 r) {
    return r.valor + r.id;
}
