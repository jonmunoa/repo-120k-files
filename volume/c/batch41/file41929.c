// fichero 41929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41929;

Registro41929 crear_registro41929(int id) {
    Registro41929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41929(Registro41929 r) {
    return r.valor + r.id;
}
