// fichero 41257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41257;

Registro41257 crear_registro41257(int id) {
    Registro41257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41257(Registro41257 r) {
    return r.valor + r.id;
}
