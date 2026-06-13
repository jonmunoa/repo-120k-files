// fichero 9749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9749;

Registro9749 crear_registro9749(int id) {
    Registro9749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9749(Registro9749 r) {
    return r.valor + r.id;
}
