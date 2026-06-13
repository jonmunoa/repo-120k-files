// fichero 9165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9165;

Registro9165 crear_registro9165(int id) {
    Registro9165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9165(Registro9165 r) {
    return r.valor + r.id;
}
