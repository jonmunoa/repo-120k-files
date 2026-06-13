// fichero 50941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50941;

Registro50941 crear_registro50941(int id) {
    Registro50941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50941(Registro50941 r) {
    return r.valor + r.id;
}
