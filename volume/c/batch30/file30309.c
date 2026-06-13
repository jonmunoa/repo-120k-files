// fichero 30309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30309;

Registro30309 crear_registro30309(int id) {
    Registro30309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30309(Registro30309 r) {
    return r.valor + r.id;
}
