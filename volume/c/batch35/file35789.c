// fichero 35789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35789;

Registro35789 crear_registro35789(int id) {
    Registro35789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35789(Registro35789 r) {
    return r.valor + r.id;
}
