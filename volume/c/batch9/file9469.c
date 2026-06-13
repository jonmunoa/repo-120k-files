// fichero 9469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9469;

Registro9469 crear_registro9469(int id) {
    Registro9469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9469(Registro9469 r) {
    return r.valor + r.id;
}
