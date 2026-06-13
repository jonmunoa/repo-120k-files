// fichero 50977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50977;

Registro50977 crear_registro50977(int id) {
    Registro50977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50977(Registro50977 r) {
    return r.valor + r.id;
}
