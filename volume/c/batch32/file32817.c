// fichero 32817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32817;

Registro32817 crear_registro32817(int id) {
    Registro32817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32817(Registro32817 r) {
    return r.valor + r.id;
}
