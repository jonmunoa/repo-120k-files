// fichero 18333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18333;

Registro18333 crear_registro18333(int id) {
    Registro18333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18333(Registro18333 r) {
    return r.valor + r.id;
}
