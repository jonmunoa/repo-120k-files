// fichero 18585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18585;

Registro18585 crear_registro18585(int id) {
    Registro18585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18585(Registro18585 r) {
    return r.valor + r.id;
}
