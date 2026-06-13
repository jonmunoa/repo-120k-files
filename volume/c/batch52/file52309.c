// fichero 52309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52309;

Registro52309 crear_registro52309(int id) {
    Registro52309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52309(Registro52309 r) {
    return r.valor + r.id;
}
