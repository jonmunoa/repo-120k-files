// fichero 47713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47713;

Registro47713 crear_registro47713(int id) {
    Registro47713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47713(Registro47713 r) {
    return r.valor + r.id;
}
