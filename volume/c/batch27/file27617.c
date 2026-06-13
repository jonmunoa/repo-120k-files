// fichero 27617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27617;

Registro27617 crear_registro27617(int id) {
    Registro27617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27617(Registro27617 r) {
    return r.valor + r.id;
}
