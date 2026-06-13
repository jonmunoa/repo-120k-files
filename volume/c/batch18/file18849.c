// fichero 18849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18849;

Registro18849 crear_registro18849(int id) {
    Registro18849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18849(Registro18849 r) {
    return r.valor + r.id;
}
