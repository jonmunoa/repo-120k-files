// fichero 7789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7789;

Registro7789 crear_registro7789(int id) {
    Registro7789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7789(Registro7789 r) {
    return r.valor + r.id;
}
