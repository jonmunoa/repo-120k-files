// fichero 9941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9941;

Registro9941 crear_registro9941(int id) {
    Registro9941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9941(Registro9941 r) {
    return r.valor + r.id;
}
