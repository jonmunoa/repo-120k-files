// fichero 41345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41345;

Registro41345 crear_registro41345(int id) {
    Registro41345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41345(Registro41345 r) {
    return r.valor + r.id;
}
