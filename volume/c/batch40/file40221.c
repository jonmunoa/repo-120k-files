// fichero 40221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40221;

Registro40221 crear_registro40221(int id) {
    Registro40221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40221(Registro40221 r) {
    return r.valor + r.id;
}
