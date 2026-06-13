// fichero 43849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43849;

Registro43849 crear_registro43849(int id) {
    Registro43849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43849(Registro43849 r) {
    return r.valor + r.id;
}
