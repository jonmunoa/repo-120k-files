// fichero 8309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8309;

Registro8309 crear_registro8309(int id) {
    Registro8309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8309(Registro8309 r) {
    return r.valor + r.id;
}
