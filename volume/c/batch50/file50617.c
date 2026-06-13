// fichero 50617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50617;

Registro50617 crear_registro50617(int id) {
    Registro50617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50617(Registro50617 r) {
    return r.valor + r.id;
}
