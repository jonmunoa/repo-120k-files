// fichero 27117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27117;

Registro27117 crear_registro27117(int id) {
    Registro27117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27117(Registro27117 r) {
    return r.valor + r.id;
}
