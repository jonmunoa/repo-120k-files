// fichero 26009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26009;

Registro26009 crear_registro26009(int id) {
    Registro26009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26009(Registro26009 r) {
    return r.valor + r.id;
}
