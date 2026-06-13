// fichero 39009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39009;

Registro39009 crear_registro39009(int id) {
    Registro39009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39009(Registro39009 r) {
    return r.valor + r.id;
}
