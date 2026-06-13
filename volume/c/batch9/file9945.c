// fichero 9945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9945;

Registro9945 crear_registro9945(int id) {
    Registro9945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9945(Registro9945 r) {
    return r.valor + r.id;
}
