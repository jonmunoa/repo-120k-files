// fichero 47593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47593;

Registro47593 crear_registro47593(int id) {
    Registro47593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47593(Registro47593 r) {
    return r.valor + r.id;
}
