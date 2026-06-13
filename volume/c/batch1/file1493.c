// fichero 1493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1493;

Registro1493 crear_registro1493(int id) {
    Registro1493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1493(Registro1493 r) {
    return r.valor + r.id;
}
