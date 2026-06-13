// fichero 50169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50169;

Registro50169 crear_registro50169(int id) {
    Registro50169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50169(Registro50169 r) {
    return r.valor + r.id;
}
