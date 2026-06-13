// fichero 1485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1485;

Registro1485 crear_registro1485(int id) {
    Registro1485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1485(Registro1485 r) {
    return r.valor + r.id;
}
