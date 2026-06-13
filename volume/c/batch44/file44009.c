// fichero 44009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44009;

Registro44009 crear_registro44009(int id) {
    Registro44009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44009(Registro44009 r) {
    return r.valor + r.id;
}
