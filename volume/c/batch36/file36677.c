// fichero 36677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36677;

Registro36677 crear_registro36677(int id) {
    Registro36677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36677(Registro36677 r) {
    return r.valor + r.id;
}
