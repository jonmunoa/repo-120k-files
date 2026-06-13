// fichero 3009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3009;

Registro3009 crear_registro3009(int id) {
    Registro3009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3009(Registro3009 r) {
    return r.valor + r.id;
}
