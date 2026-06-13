// fichero 49333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49333;

Registro49333 crear_registro49333(int id) {
    Registro49333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49333(Registro49333 r) {
    return r.valor + r.id;
}
