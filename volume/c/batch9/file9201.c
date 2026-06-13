// fichero 9201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9201;

Registro9201 crear_registro9201(int id) {
    Registro9201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9201(Registro9201 r) {
    return r.valor + r.id;
}
