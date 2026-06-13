// fichero 41529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41529;

Registro41529 crear_registro41529(int id) {
    Registro41529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41529(Registro41529 r) {
    return r.valor + r.id;
}
