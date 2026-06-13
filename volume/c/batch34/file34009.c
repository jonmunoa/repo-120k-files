// fichero 34009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34009;

Registro34009 crear_registro34009(int id) {
    Registro34009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34009(Registro34009 r) {
    return r.valor + r.id;
}
