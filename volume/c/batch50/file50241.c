// fichero 50241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50241;

Registro50241 crear_registro50241(int id) {
    Registro50241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50241(Registro50241 r) {
    return r.valor + r.id;
}
