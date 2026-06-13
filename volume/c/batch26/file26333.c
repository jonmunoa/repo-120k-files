// fichero 26333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26333;

Registro26333 crear_registro26333(int id) {
    Registro26333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26333(Registro26333 r) {
    return r.valor + r.id;
}
