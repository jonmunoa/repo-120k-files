// fichero 3941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3941;

Registro3941 crear_registro3941(int id) {
    Registro3941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3941(Registro3941 r) {
    return r.valor + r.id;
}
