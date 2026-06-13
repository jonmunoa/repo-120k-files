// fichero 9957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9957;

Registro9957 crear_registro9957(int id) {
    Registro9957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9957(Registro9957 r) {
    return r.valor + r.id;
}
