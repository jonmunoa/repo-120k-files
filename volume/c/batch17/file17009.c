// fichero 17009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17009;

Registro17009 crear_registro17009(int id) {
    Registro17009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17009(Registro17009 r) {
    return r.valor + r.id;
}
