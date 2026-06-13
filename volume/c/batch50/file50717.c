// fichero 50717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50717;

Registro50717 crear_registro50717(int id) {
    Registro50717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50717(Registro50717 r) {
    return r.valor + r.id;
}
