// fichero 7161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7161;

Registro7161 crear_registro7161(int id) {
    Registro7161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7161(Registro7161 r) {
    return r.valor + r.id;
}
