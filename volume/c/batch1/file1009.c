// fichero 1009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1009;

Registro1009 crear_registro1009(int id) {
    Registro1009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1009(Registro1009 r) {
    return r.valor + r.id;
}
