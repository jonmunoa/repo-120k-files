// fichero 22333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22333;

Registro22333 crear_registro22333(int id) {
    Registro22333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22333(Registro22333 r) {
    return r.valor + r.id;
}
