// fichero 14205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14205;

Registro14205 crear_registro14205(int id) {
    Registro14205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14205(Registro14205 r) {
    return r.valor + r.id;
}
