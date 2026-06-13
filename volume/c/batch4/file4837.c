// fichero 4837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4837;

Registro4837 crear_registro4837(int id) {
    Registro4837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4837(Registro4837 r) {
    return r.valor + r.id;
}
