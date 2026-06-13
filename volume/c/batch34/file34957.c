// fichero 34957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34957;

Registro34957 crear_registro34957(int id) {
    Registro34957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34957(Registro34957 r) {
    return r.valor + r.id;
}
