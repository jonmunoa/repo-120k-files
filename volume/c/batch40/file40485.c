// fichero 40485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40485;

Registro40485 crear_registro40485(int id) {
    Registro40485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40485(Registro40485 r) {
    return r.valor + r.id;
}
