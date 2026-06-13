// fichero 2333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2333;

Registro2333 crear_registro2333(int id) {
    Registro2333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2333(Registro2333 r) {
    return r.valor + r.id;
}
