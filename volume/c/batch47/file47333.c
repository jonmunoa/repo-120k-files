// fichero 47333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47333;

Registro47333 crear_registro47333(int id) {
    Registro47333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47333(Registro47333 r) {
    return r.valor + r.id;
}
