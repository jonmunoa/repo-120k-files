// fichero 50745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50745;

Registro50745 crear_registro50745(int id) {
    Registro50745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50745(Registro50745 r) {
    return r.valor + r.id;
}
