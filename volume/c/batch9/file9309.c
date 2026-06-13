// fichero 9309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9309;

Registro9309 crear_registro9309(int id) {
    Registro9309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9309(Registro9309 r) {
    return r.valor + r.id;
}
