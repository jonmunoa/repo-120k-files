// fichero 27049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27049;

Registro27049 crear_registro27049(int id) {
    Registro27049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27049(Registro27049 r) {
    return r.valor + r.id;
}
