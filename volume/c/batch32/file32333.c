// fichero 32333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32333;

Registro32333 crear_registro32333(int id) {
    Registro32333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32333(Registro32333 r) {
    return r.valor + r.id;
}
