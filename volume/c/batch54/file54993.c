// fichero 54993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54993;

Registro54993 crear_registro54993(int id) {
    Registro54993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54993(Registro54993 r) {
    return r.valor + r.id;
}
