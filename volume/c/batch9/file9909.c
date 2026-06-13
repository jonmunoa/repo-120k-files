// fichero 9909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9909;

Registro9909 crear_registro9909(int id) {
    Registro9909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9909(Registro9909 r) {
    return r.valor + r.id;
}
