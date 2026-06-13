// fichero 11921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11921;

Registro11921 crear_registro11921(int id) {
    Registro11921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11921(Registro11921 r) {
    return r.valor + r.id;
}
