// fichero 38161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38161;

Registro38161 crear_registro38161(int id) {
    Registro38161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38161(Registro38161 r) {
    return r.valor + r.id;
}
