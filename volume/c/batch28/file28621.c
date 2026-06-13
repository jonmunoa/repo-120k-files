// fichero 28621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28621;

Registro28621 crear_registro28621(int id) {
    Registro28621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28621(Registro28621 r) {
    return r.valor + r.id;
}
