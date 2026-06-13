// fichero 9589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9589;

Registro9589 crear_registro9589(int id) {
    Registro9589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9589(Registro9589 r) {
    return r.valor + r.id;
}
