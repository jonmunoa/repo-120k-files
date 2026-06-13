// fichero 54849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54849;

Registro54849 crear_registro54849(int id) {
    Registro54849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54849(Registro54849 r) {
    return r.valor + r.id;
}
