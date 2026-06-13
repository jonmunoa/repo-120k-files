// fichero 18793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18793;

Registro18793 crear_registro18793(int id) {
    Registro18793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18793(Registro18793 r) {
    return r.valor + r.id;
}
