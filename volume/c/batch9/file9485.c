// fichero 9485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9485;

Registro9485 crear_registro9485(int id) {
    Registro9485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9485(Registro9485 r) {
    return r.valor + r.id;
}
