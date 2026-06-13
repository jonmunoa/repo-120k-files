// fichero 44617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44617;

Registro44617 crear_registro44617(int id) {
    Registro44617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44617(Registro44617 r) {
    return r.valor + r.id;
}
