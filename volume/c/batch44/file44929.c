// fichero 44929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44929;

Registro44929 crear_registro44929(int id) {
    Registro44929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44929(Registro44929 r) {
    return r.valor + r.id;
}
