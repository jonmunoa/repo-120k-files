// fichero 50673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50673;

Registro50673 crear_registro50673(int id) {
    Registro50673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50673(Registro50673 r) {
    return r.valor + r.id;
}
