// fichero 28309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28309;

Registro28309 crear_registro28309(int id) {
    Registro28309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28309(Registro28309 r) {
    return r.valor + r.id;
}
