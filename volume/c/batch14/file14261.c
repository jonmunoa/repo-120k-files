// fichero 14261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14261;

Registro14261 crear_registro14261(int id) {
    Registro14261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14261(Registro14261 r) {
    return r.valor + r.id;
}
