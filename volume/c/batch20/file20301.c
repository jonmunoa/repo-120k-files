// fichero 20301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20301;

Registro20301 crear_registro20301(int id) {
    Registro20301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20301(Registro20301 r) {
    return r.valor + r.id;
}
