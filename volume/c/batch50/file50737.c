// fichero 50737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50737;

Registro50737 crear_registro50737(int id) {
    Registro50737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50737(Registro50737 r) {
    return r.valor + r.id;
}
