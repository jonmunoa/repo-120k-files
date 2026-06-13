// fichero 9577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9577;

Registro9577 crear_registro9577(int id) {
    Registro9577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9577(Registro9577 r) {
    return r.valor + r.id;
}
