// fichero 7941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7941;

Registro7941 crear_registro7941(int id) {
    Registro7941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7941(Registro7941 r) {
    return r.valor + r.id;
}
