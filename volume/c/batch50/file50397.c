// fichero 50397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50397;

Registro50397 crear_registro50397(int id) {
    Registro50397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50397(Registro50397 r) {
    return r.valor + r.id;
}
