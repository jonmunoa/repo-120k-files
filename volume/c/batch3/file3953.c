// fichero 3953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3953;

Registro3953 crear_registro3953(int id) {
    Registro3953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3953(Registro3953 r) {
    return r.valor + r.id;
}
