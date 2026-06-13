// fichero 18609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18609;

Registro18609 crear_registro18609(int id) {
    Registro18609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18609(Registro18609 r) {
    return r.valor + r.id;
}
