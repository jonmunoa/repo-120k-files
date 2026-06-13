// fichero 12221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12221;

Registro12221 crear_registro12221(int id) {
    Registro12221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12221(Registro12221 r) {
    return r.valor + r.id;
}
