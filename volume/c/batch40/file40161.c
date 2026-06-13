// fichero 40161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40161;

Registro40161 crear_registro40161(int id) {
    Registro40161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40161(Registro40161 r) {
    return r.valor + r.id;
}
