// fichero 18109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18109;

Registro18109 crear_registro18109(int id) {
    Registro18109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18109(Registro18109 r) {
    return r.valor + r.id;
}
