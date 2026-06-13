// fichero 27249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27249;

Registro27249 crear_registro27249(int id) {
    Registro27249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27249(Registro27249 r) {
    return r.valor + r.id;
}
