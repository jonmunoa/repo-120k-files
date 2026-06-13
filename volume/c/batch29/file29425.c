// fichero 29425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29425;

Registro29425 crear_registro29425(int id) {
    Registro29425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29425(Registro29425 r) {
    return r.valor + r.id;
}
