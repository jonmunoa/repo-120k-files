// fichero 18945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18945;

Registro18945 crear_registro18945(int id) {
    Registro18945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18945(Registro18945 r) {
    return r.valor + r.id;
}
