// fichero 27309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27309;

Registro27309 crear_registro27309(int id) {
    Registro27309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27309(Registro27309 r) {
    return r.valor + r.id;
}
