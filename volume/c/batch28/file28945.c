// fichero 28945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28945;

Registro28945 crear_registro28945(int id) {
    Registro28945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28945(Registro28945 r) {
    return r.valor + r.id;
}
