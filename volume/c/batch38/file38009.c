// fichero 38009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38009;

Registro38009 crear_registro38009(int id) {
    Registro38009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38009(Registro38009 r) {
    return r.valor + r.id;
}
