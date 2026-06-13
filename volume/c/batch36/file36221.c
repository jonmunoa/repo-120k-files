// fichero 36221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36221;

Registro36221 crear_registro36221(int id) {
    Registro36221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36221(Registro36221 r) {
    return r.valor + r.id;
}
