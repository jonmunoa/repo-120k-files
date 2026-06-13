// fichero 50369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50369;

Registro50369 crear_registro50369(int id) {
    Registro50369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50369(Registro50369 r) {
    return r.valor + r.id;
}
