// fichero 27221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27221;

Registro27221 crear_registro27221(int id) {
    Registro27221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27221(Registro27221 r) {
    return r.valor + r.id;
}
