// fichero 52417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52417;

Registro52417 crear_registro52417(int id) {
    Registro52417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52417(Registro52417 r) {
    return r.valor + r.id;
}
