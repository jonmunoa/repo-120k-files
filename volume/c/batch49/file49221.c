// fichero 49221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49221;

Registro49221 crear_registro49221(int id) {
    Registro49221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49221(Registro49221 r) {
    return r.valor + r.id;
}
