// fichero 50569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50569;

Registro50569 crear_registro50569(int id) {
    Registro50569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50569(Registro50569 r) {
    return r.valor + r.id;
}
