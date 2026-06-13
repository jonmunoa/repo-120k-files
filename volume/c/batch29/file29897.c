// fichero 29897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29897;

Registro29897 crear_registro29897(int id) {
    Registro29897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29897(Registro29897 r) {
    return r.valor + r.id;
}
