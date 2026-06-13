// fichero 5309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5309;

Registro5309 crear_registro5309(int id) {
    Registro5309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5309(Registro5309 r) {
    return r.valor + r.id;
}
