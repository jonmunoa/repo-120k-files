// fichero 29301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29301;

Registro29301 crear_registro29301(int id) {
    Registro29301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29301(Registro29301 r) {
    return r.valor + r.id;
}
