// fichero 41661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41661;

Registro41661 crear_registro41661(int id) {
    Registro41661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41661(Registro41661 r) {
    return r.valor + r.id;
}
