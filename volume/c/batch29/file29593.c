// fichero 29593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29593;

Registro29593 crear_registro29593(int id) {
    Registro29593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29593(Registro29593 r) {
    return r.valor + r.id;
}
