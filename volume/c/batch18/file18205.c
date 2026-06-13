// fichero 18205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18205;

Registro18205 crear_registro18205(int id) {
    Registro18205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18205(Registro18205 r) {
    return r.valor + r.id;
}
