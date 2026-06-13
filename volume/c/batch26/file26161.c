// fichero 26161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26161;

Registro26161 crear_registro26161(int id) {
    Registro26161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26161(Registro26161 r) {
    return r.valor + r.id;
}
