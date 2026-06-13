// fichero 49309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49309;

Registro49309 crear_registro49309(int id) {
    Registro49309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49309(Registro49309 r) {
    return r.valor + r.id;
}
