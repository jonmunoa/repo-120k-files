// fichero 18221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18221;

Registro18221 crear_registro18221(int id) {
    Registro18221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18221(Registro18221 r) {
    return r.valor + r.id;
}
