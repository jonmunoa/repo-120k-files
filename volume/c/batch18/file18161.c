// fichero 18161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18161;

Registro18161 crear_registro18161(int id) {
    Registro18161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18161(Registro18161 r) {
    return r.valor + r.id;
}
