// fichero 9369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9369;

Registro9369 crear_registro9369(int id) {
    Registro9369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9369(Registro9369 r) {
    return r.valor + r.id;
}
