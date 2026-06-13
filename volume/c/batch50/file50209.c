// fichero 50209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50209;

Registro50209 crear_registro50209(int id) {
    Registro50209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50209(Registro50209 r) {
    return r.valor + r.id;
}
