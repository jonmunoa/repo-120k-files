// fichero 52445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52445;

Registro52445 crear_registro52445(int id) {
    Registro52445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52445(Registro52445 r) {
    return r.valor + r.id;
}
