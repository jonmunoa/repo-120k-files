// fichero 53009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53009;

Registro53009 crear_registro53009(int id) {
    Registro53009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53009(Registro53009 r) {
    return r.valor + r.id;
}
