// fichero 53309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53309;

Registro53309 crear_registro53309(int id) {
    Registro53309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53309(Registro53309 r) {
    return r.valor + r.id;
}
