// fichero 50781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50781;

Registro50781 crear_registro50781(int id) {
    Registro50781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50781(Registro50781 r) {
    return r.valor + r.id;
}
