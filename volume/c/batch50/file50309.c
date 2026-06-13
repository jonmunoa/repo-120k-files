// fichero 50309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50309;

Registro50309 crear_registro50309(int id) {
    Registro50309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50309(Registro50309 r) {
    return r.valor + r.id;
}
