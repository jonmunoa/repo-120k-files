// fichero 50777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50777;

Registro50777 crear_registro50777(int id) {
    Registro50777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50777(Registro50777 r) {
    return r.valor + r.id;
}
