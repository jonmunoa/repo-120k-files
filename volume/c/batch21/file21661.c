// fichero 21661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21661;

Registro21661 crear_registro21661(int id) {
    Registro21661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21661(Registro21661 r) {
    return r.valor + r.id;
}
