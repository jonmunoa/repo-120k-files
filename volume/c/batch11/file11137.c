// fichero 11137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11137;

Registro11137 crear_registro11137(int id) {
    Registro11137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11137(Registro11137 r) {
    return r.valor + r.id;
}
