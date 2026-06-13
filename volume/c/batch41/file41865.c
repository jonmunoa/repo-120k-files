// fichero 41865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41865;

Registro41865 crear_registro41865(int id) {
    Registro41865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41865(Registro41865 r) {
    return r.valor + r.id;
}
