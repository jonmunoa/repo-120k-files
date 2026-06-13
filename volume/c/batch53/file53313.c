// fichero 53313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53313;

Registro53313 crear_registro53313(int id) {
    Registro53313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53313(Registro53313 r) {
    return r.valor + r.id;
}
