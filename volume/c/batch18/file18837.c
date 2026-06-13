// fichero 18837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18837;

Registro18837 crear_registro18837(int id) {
    Registro18837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18837(Registro18837 r) {
    return r.valor + r.id;
}
