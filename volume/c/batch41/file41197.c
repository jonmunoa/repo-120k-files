// fichero 41197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41197;

Registro41197 crear_registro41197(int id) {
    Registro41197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41197(Registro41197 r) {
    return r.valor + r.id;
}
