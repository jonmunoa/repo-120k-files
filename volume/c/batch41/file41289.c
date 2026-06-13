// fichero 41289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41289;

Registro41289 crear_registro41289(int id) {
    Registro41289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41289(Registro41289 r) {
    return r.valor + r.id;
}
