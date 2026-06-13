// fichero 36997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36997;

Registro36997 crear_registro36997(int id) {
    Registro36997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36997(Registro36997 r) {
    return r.valor + r.id;
}
