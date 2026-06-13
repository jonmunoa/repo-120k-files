// fichero 9549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9549;

Registro9549 crear_registro9549(int id) {
    Registro9549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9549(Registro9549 r) {
    return r.valor + r.id;
}
