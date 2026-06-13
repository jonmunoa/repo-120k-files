// fichero 52393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52393;

Registro52393 crear_registro52393(int id) {
    Registro52393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52393(Registro52393 r) {
    return r.valor + r.id;
}
