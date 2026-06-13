// fichero 31277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31277;

Registro31277 crear_registro31277(int id) {
    Registro31277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31277(Registro31277 r) {
    return r.valor + r.id;
}
