// fichero 31173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31173;

Registro31173 crear_registro31173(int id) {
    Registro31173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31173(Registro31173 r) {
    return r.valor + r.id;
}
