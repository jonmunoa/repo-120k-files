// fichero 7661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7661;

Registro7661 crear_registro7661(int id) {
    Registro7661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7661(Registro7661 r) {
    return r.valor + r.id;
}
