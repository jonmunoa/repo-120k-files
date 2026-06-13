// fichero 8165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8165;

Registro8165 crear_registro8165(int id) {
    Registro8165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8165(Registro8165 r) {
    return r.valor + r.id;
}
