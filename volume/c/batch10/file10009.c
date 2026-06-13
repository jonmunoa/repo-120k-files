// fichero 10009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10009;

Registro10009 crear_registro10009(int id) {
    Registro10009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10009(Registro10009 r) {
    return r.valor + r.id;
}
