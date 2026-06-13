// fichero 41517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41517;

Registro41517 crear_registro41517(int id) {
    Registro41517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41517(Registro41517 r) {
    return r.valor + r.id;
}
