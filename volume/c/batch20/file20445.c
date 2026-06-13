// fichero 20445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20445;

Registro20445 crear_registro20445(int id) {
    Registro20445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20445(Registro20445 r) {
    return r.valor + r.id;
}
