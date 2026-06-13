// fichero 27877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27877;

Registro27877 crear_registro27877(int id) {
    Registro27877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27877(Registro27877 r) {
    return r.valor + r.id;
}
