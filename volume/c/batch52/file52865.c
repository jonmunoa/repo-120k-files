// fichero 52865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52865;

Registro52865 crear_registro52865(int id) {
    Registro52865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52865(Registro52865 r) {
    return r.valor + r.id;
}
