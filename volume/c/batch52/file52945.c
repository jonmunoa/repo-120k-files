// fichero 52945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52945;

Registro52945 crear_registro52945(int id) {
    Registro52945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52945(Registro52945 r) {
    return r.valor + r.id;
}
