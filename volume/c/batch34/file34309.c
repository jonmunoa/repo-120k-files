// fichero 34309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34309;

Registro34309 crear_registro34309(int id) {
    Registro34309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34309(Registro34309 r) {
    return r.valor + r.id;
}
