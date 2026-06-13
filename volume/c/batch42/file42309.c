// fichero 42309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42309;

Registro42309 crear_registro42309(int id) {
    Registro42309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42309(Registro42309 r) {
    return r.valor + r.id;
}
