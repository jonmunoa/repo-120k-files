// fichero 36289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36289;

Registro36289 crear_registro36289(int id) {
    Registro36289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36289(Registro36289 r) {
    return r.valor + r.id;
}
