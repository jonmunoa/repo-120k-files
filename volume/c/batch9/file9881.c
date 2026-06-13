// fichero 9881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9881;

Registro9881 crear_registro9881(int id) {
    Registro9881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9881(Registro9881 r) {
    return r.valor + r.id;
}
