// fichero 29489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29489;

Registro29489 crear_registro29489(int id) {
    Registro29489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29489(Registro29489 r) {
    return r.valor + r.id;
}
