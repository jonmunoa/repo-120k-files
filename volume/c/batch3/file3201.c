// fichero 3201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3201;

Registro3201 crear_registro3201(int id) {
    Registro3201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3201(Registro3201 r) {
    return r.valor + r.id;
}
