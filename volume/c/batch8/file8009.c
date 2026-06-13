// fichero 8009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8009;

Registro8009 crear_registro8009(int id) {
    Registro8009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8009(Registro8009 r) {
    return r.valor + r.id;
}
