// fichero 36009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36009;

Registro36009 crear_registro36009(int id) {
    Registro36009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36009(Registro36009 r) {
    return r.valor + r.id;
}
