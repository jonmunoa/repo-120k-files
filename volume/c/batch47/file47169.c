// fichero 47169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47169;

Registro47169 crear_registro47169(int id) {
    Registro47169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47169(Registro47169 r) {
    return r.valor + r.id;
}
