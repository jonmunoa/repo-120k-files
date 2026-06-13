// fichero 50789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50789;

Registro50789 crear_registro50789(int id) {
    Registro50789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50789(Registro50789 r) {
    return r.valor + r.id;
}
