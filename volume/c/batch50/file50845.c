// fichero 50845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50845;

Registro50845 crear_registro50845(int id) {
    Registro50845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50845(Registro50845 r) {
    return r.valor + r.id;
}
