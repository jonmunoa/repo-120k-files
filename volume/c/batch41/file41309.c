// fichero 41309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41309;

Registro41309 crear_registro41309(int id) {
    Registro41309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41309(Registro41309 r) {
    return r.valor + r.id;
}
