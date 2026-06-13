// fichero 29205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29205;

Registro29205 crear_registro29205(int id) {
    Registro29205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29205(Registro29205 r) {
    return r.valor + r.id;
}
