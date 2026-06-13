// fichero 32609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32609;

Registro32609 crear_registro32609(int id) {
    Registro32609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32609(Registro32609 r) {
    return r.valor + r.id;
}
