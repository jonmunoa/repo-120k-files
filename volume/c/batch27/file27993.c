// fichero 27993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27993;

Registro27993 crear_registro27993(int id) {
    Registro27993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27993(Registro27993 r) {
    return r.valor + r.id;
}
