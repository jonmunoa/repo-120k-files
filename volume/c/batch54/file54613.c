// fichero 54613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54613;

Registro54613 crear_registro54613(int id) {
    Registro54613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54613(Registro54613 r) {
    return r.valor + r.id;
}
