// fichero 7309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7309;

Registro7309 crear_registro7309(int id) {
    Registro7309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7309(Registro7309 r) {
    return r.valor + r.id;
}
