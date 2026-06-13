// fichero 29849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29849;

Registro29849 crear_registro29849(int id) {
    Registro29849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29849(Registro29849 r) {
    return r.valor + r.id;
}
