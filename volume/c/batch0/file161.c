// fichero 161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro161;

Registro161 crear_registro161(int id) {
    Registro161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro161(Registro161 r) {
    return r.valor + r.id;
}
