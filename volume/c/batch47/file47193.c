// fichero 47193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47193;

Registro47193 crear_registro47193(int id) {
    Registro47193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47193(Registro47193 r) {
    return r.valor + r.id;
}
