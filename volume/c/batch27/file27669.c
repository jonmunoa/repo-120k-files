// fichero 27669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27669;

Registro27669 crear_registro27669(int id) {
    Registro27669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27669(Registro27669 r) {
    return r.valor + r.id;
}
