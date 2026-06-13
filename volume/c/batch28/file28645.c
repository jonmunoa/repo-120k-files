// fichero 28645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28645;

Registro28645 crear_registro28645(int id) {
    Registro28645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28645(Registro28645 r) {
    return r.valor + r.id;
}
