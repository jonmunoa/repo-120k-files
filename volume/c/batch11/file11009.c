// fichero 11009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11009;

Registro11009 crear_registro11009(int id) {
    Registro11009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11009(Registro11009 r) {
    return r.valor + r.id;
}
