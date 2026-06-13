// fichero 9889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9889;

Registro9889 crear_registro9889(int id) {
    Registro9889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9889(Registro9889 r) {
    return r.valor + r.id;
}
