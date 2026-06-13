// fichero 30229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30229;

Registro30229 crear_registro30229(int id) {
    Registro30229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30229(Registro30229 r) {
    return r.valor + r.id;
}
