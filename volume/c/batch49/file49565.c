// fichero 49565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49565;

Registro49565 crear_registro49565(int id) {
    Registro49565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49565(Registro49565 r) {
    return r.valor + r.id;
}
