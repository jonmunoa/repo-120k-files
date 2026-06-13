// fichero 47309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47309;

Registro47309 crear_registro47309(int id) {
    Registro47309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47309(Registro47309 r) {
    return r.valor + r.id;
}
