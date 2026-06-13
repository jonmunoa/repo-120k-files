// fichero 50713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50713;

Registro50713 crear_registro50713(int id) {
    Registro50713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50713(Registro50713 r) {
    return r.valor + r.id;
}
