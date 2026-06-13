// fichero 11309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11309;

Registro11309 crear_registro11309(int id) {
    Registro11309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11309(Registro11309 r) {
    return r.valor + r.id;
}
