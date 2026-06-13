// fichero 9865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9865;

Registro9865 crear_registro9865(int id) {
    Registro9865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9865(Registro9865 r) {
    return r.valor + r.id;
}
