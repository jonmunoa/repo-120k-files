// fichero 277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro277;

Registro277 crear_registro277(int id) {
    Registro277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro277(Registro277 r) {
    return r.valor + r.id;
}
