// fichero 3837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3837;

Registro3837 crear_registro3837(int id) {
    Registro3837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3837(Registro3837 r) {
    return r.valor + r.id;
}
