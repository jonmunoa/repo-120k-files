// fichero 52301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52301;

Registro52301 crear_registro52301(int id) {
    Registro52301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52301(Registro52301 r) {
    return r.valor + r.id;
}
