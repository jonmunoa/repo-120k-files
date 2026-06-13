// fichero 9009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9009;

Registro9009 crear_registro9009(int id) {
    Registro9009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9009(Registro9009 r) {
    return r.valor + r.id;
}
