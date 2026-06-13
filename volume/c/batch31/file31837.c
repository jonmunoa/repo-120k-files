// fichero 31837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31837;

Registro31837 crear_registro31837(int id) {
    Registro31837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31837(Registro31837 r) {
    return r.valor + r.id;
}
