// fichero 3101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3101;

Registro3101 crear_registro3101(int id) {
    Registro3101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3101(Registro3101 r) {
    return r.valor + r.id;
}
