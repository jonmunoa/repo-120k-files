// fichero 18373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18373;

Registro18373 crear_registro18373(int id) {
    Registro18373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18373(Registro18373 r) {
    return r.valor + r.id;
}
