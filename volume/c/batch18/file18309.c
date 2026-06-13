// fichero 18309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18309;

Registro18309 crear_registro18309(int id) {
    Registro18309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18309(Registro18309 r) {
    return r.valor + r.id;
}
