// fichero 41301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41301;

Registro41301 crear_registro41301(int id) {
    Registro41301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41301(Registro41301 r) {
    return r.valor + r.id;
}
