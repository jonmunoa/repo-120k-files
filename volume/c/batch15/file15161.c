// fichero 15161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15161;

Registro15161 crear_registro15161(int id) {
    Registro15161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15161(Registro15161 r) {
    return r.valor + r.id;
}
