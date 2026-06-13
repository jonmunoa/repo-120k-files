// fichero 9765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9765;

Registro9765 crear_registro9765(int id) {
    Registro9765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9765(Registro9765 r) {
    return r.valor + r.id;
}
