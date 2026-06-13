// fichero 18449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18449;

Registro18449 crear_registro18449(int id) {
    Registro18449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18449(Registro18449 r) {
    return r.valor + r.id;
}
