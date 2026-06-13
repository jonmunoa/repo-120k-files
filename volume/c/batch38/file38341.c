// fichero 38341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38341;

Registro38341 crear_registro38341(int id) {
    Registro38341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38341(Registro38341 r) {
    return r.valor + r.id;
}
