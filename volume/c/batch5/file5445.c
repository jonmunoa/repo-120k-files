// fichero 5445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5445;

Registro5445 crear_registro5445(int id) {
    Registro5445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5445(Registro5445 r) {
    return r.valor + r.id;
}
