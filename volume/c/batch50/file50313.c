// fichero 50313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50313;

Registro50313 crear_registro50313(int id) {
    Registro50313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50313(Registro50313 r) {
    return r.valor + r.id;
}
