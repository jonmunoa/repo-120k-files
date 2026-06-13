// fichero 41969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41969;

Registro41969 crear_registro41969(int id) {
    Registro41969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41969(Registro41969 r) {
    return r.valor + r.id;
}
