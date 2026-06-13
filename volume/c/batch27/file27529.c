// fichero 27529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27529;

Registro27529 crear_registro27529(int id) {
    Registro27529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27529(Registro27529 r) {
    return r.valor + r.id;
}
