// fichero 16897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16897;

Registro16897 crear_registro16897(int id) {
    Registro16897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16897(Registro16897 r) {
    return r.valor + r.id;
}
