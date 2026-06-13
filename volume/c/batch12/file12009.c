// fichero 12009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12009;

Registro12009 crear_registro12009(int id) {
    Registro12009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12009(Registro12009 r) {
    return r.valor + r.id;
}
