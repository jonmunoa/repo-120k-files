// fichero 41281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41281;

Registro41281 crear_registro41281(int id) {
    Registro41281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41281(Registro41281 r) {
    return r.valor + r.id;
}
