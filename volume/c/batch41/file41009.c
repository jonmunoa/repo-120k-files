// fichero 41009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41009;

Registro41009 crear_registro41009(int id) {
    Registro41009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41009(Registro41009 r) {
    return r.valor + r.id;
}
