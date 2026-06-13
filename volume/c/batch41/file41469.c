// fichero 41469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41469;

Registro41469 crear_registro41469(int id) {
    Registro41469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41469(Registro41469 r) {
    return r.valor + r.id;
}
