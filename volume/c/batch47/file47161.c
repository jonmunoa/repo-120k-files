// fichero 47161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47161;

Registro47161 crear_registro47161(int id) {
    Registro47161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47161(Registro47161 r) {
    return r.valor + r.id;
}
