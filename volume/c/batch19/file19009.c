// fichero 19009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19009;

Registro19009 crear_registro19009(int id) {
    Registro19009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19009(Registro19009 r) {
    return r.valor + r.id;
}
