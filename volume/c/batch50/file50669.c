// fichero 50669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50669;

Registro50669 crear_registro50669(int id) {
    Registro50669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50669(Registro50669 r) {
    return r.valor + r.id;
}
