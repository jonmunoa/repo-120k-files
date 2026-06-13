// fichero 52009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52009;

Registro52009 crear_registro52009(int id) {
    Registro52009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52009(Registro52009 r) {
    return r.valor + r.id;
}
