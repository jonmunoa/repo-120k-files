// fichero 21765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21765;

Registro21765 crear_registro21765(int id) {
    Registro21765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21765(Registro21765 r) {
    return r.valor + r.id;
}
