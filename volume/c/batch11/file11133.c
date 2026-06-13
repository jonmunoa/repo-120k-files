// fichero 11133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11133;

Registro11133 crear_registro11133(int id) {
    Registro11133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11133(Registro11133 r) {
    return r.valor + r.id;
}
